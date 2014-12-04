/*
 *	Rewrite of DSA1 v3.02_de functions of seg050 (level up)
 *	Functions rewritten: 2/5
*/

#include "v302de.h"

#include "seg007.h"
#include "seg097.h"

#if !defined(__BORLANDC__)
namespace M302de {
#endif

struct dummy_in {
	signed char first, last;
};

struct dummy {
	struct dummy_in a[9];
};

/**
 * \brief		tries to increase a spell in advanced mode
 * \param	hero	pointer to the hero
 * \param	spell	number of the spell
 */
/* Borlandified and identical */
void inc_spell_advanced(Bit8u *hero, signed short spell)
{
	signed short l_di = 1;
	signed short randval;
	struct dummy a = *(struct dummy*)(p_datseg + 0x6682);

	if ((host_readbs(hero + 0x21) == 7) &&
		(ds_readbs((0x099d + 0) + 10 * spell) == 2))
	{
		/* spell is a warlock spell */
		l_di = 2;
	}

	if ((host_readbs(hero + 0x21) >= 10) &&
		((ds_readbs((0x099d + 0) + 10 * spell) == 3) ||
			(ds_readbs((0x099d + 0) + 10 * spell) == 5) ||
			(ds_readbs((0x099d + 0) + 10 * spell) == 4)))
	{
		/* elven spell */
		l_di = 2;
	}

	if ((host_readbs(hero + 0x21) == 8) &&
		(ds_readbs((0x099d + 0) + 10 * spell) == 0))
	{
		/* spell is a druid spell */
		l_di = 2;
	}

	if (host_readbs(hero + 0x21) == 9) {

		/* mages */
		if (ds_readbs((0x099d + 0) + 10 * spell) == 1) {
			/* spell is a mage spell */
			l_di = 2;
		}

		if ((a.a[host_readbs(hero + 0x194)].first <= spell) &&
			(a.a[host_readbs(hero + 0x194)].last >= spell)) {
			l_di = 2;
		}

		if (is_in_word_array(spell, (signed short*)Real2Host(ds_readd(0x0d97 + 4 * host_readbs(hero + 0x194)))))
		{
			l_di = 3;
		}
	}

	if (host_readbs(Real2Host(ds_readd(0xe3b2)) + 2 * spell + 1) >= l_di) {

		/* no increase is possible */

		GUI_output(get_city(0xac));

	} else if (host_readbs(Real2Host(ds_readd(0xe3b2)) + 2 * spell) == 3) {

		/* used up legal increase */

		GUI_output(get_city(0xb0));
	} else {
		/* try to increase */

		dec_ptr_bs(hero + 0x193);

		if (host_readbs(hero + 0x13d + spell) >= 11) {
			randval = random_interval(3, 18);
		} else {
			randval = random_interval(2, 12);
		}

		if (host_readbs(hero + 0x13d + spell) < randval) {

			/* success */

			GUI_output(get_city(0x94));

			/* increment spell value */
			inc_ptr_bs(hero + spell + 0x13d);

			/* set the try counter to 0 */
			host_writebs(Real2Host(ds_readd(0xe3b2)) + 2 * spell, 0);
			/* increment the increase counter */
			inc_ptr_bs(Real2Host(ds_readd(0xe3b2)) + 2 * spell + 1);
		} else {
			/* fail */
			GUI_output(get_ltx(0x548));

			/* increment the try counter */
			inc_ptr_bs(Real2Host(ds_readd(0xe3b2)) + 2 * spell);
		}
	}
}

/**
 * inc_skill_novice() - tries to increace a skill in novice mode
 * @hero:	pointer to the hero
 * @skill:	number of the skill
 *
 * Remarks:	This function is quiet and does not check how many times
 *		a skill can be increased. So the correct rules come
 *		from the array which contain the skills.
 */
void inc_skill_novice(Bit8u *hero, unsigned short skill)
{
	unsigned short done;
	unsigned short randval;

	done = 0;

	while (!done) {
		/* leave the loop if 3 incs failes or the skill value is 18 */
		if (host_readb(Real2Host(ds_readd(0xe3b6)) + skill * 2) == 3 ||
			host_readb(hero + 0x108 + skill) == 18) {
			done = 1;
#if !defined(__BORLANDC__)
			D1_INFO("%s hatt alle Versuche aufgebraucht\n", hero + 0x10);
#endif
			continue;
		}

		/* dec available skill incs */
		host_writeb(hero + 0x13c, host_readb(hero + 0x13c) - 1);

		/* check if available skill incs are 0 */
		if (!(signed char)host_readb(hero + 0x13c))
			done = 1;

		/* on a  skill value < 11 use 2W6 else 3W6 */
		if ((signed char)host_readb(hero + 0x108 + skill) >= 11)
			randval = random_interval(3, 18);
		else
			randval = random_interval(2, 12);

		/* check if increase success */
		if ((signed char)host_readb(hero + 0x108 + skill) < randval) {
			/* inc skill value */
			host_writeb(hero + 0x108 + skill,
				host_readb(hero + 0x108 + skill) + 1);

			/* reset failed counter */
			host_writeb(Real2Host(ds_readd(0xe3b6) + skill * 2), 0);

			done = 1;

			/* adjust AT PA values */
			if (skill <= 6) {
				if (host_readb(hero + 0x68 + skill) > host_readb(hero + 0x6f + skill)) {
					host_writeb(hero + 0x6f + skill,
						host_readb(hero + 0x6f + skill) + 1);
				} else {
					host_writeb(hero + 0x68 + skill,
						host_readb(hero + 0x68 + skill) + 1);
				}
			}

		} else {
			/* inc failed oounter */
			host_writeb(Real2Host(ds_readd(0xe3b6)) + skill * 2,
				host_readb(Real2Host(ds_readd(0xe3b6)) + skill * 2) + 1);
		}
	}
}

signed short level_up(signed short hero_pos)
{
	DUMMY_WARNING();
	return -1;
}

#if !defined(__BORLANDC__)
}
#endif

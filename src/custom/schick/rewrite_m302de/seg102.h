#if !defined(__BORLANDC__)
namespace M302de {
#endif

/* 0x20 */
signed short MON_cast_spell(RealPt, signed char);

/* 0x25 */
void mspell_verwandlung(void);

/* 0x2a */
void mspell_bannbaladin(void);

/* 0x2f */
void mspell_boeser_blick(void);

/* 0x34 */
void mspell_horriphobus(void);

/* 0x6b */
/* should be static */
void MON_do_damage(signed short);

/* 0x70 */
/* unused */
signed short MON_get_target_PA(void);

/* 0x75 */
/* unused */
signed short MON_get_target_RS(void);

/* 0x7a */
/* should be static */
signed short MON_get_spell_cost(signed short, signed short);

/* 0x7f */
/* should be static */
signed short MON_test_attrib3(Bit8u*, signed short, signed short, signed short, signed char);

/* 0x84 */
/* should be static */
signed short MON_test_skill(Bit8u*, signed short, signed char);

/* 0x89 */
/* should be static */
void MON_sub_ae(Bit8u*, signed short);

#if !defined(__BORLANDC__)
}
#endif


namespace G105de {
	void start_music(Bit16u);
	void read_soundcfg();
	void init_music(unsigned long);
	void stop_music();
	bool emu_load_seq(Bit16u);
	bool load_seq(Bit16u);
	bool play_sequence(Bit16u);
	Bit8u *get_timbre(Bit16u, Bit16u);
	bool call_load_file(Bit16u);
	bool load_file(Bit16u);
	void restart_midi();
	bool load_driver(RealPt, Bit16u, Bit16u);
	void play_midi(Bit16u);
	void stop_sequence();
	void mouse_action(Bit8u*, Bit8u*, Bit8u*, Bit8u*, Bit8u*);
	void mouse_enable();
	void mouse_disable();
	void mouse_do_enable(Bit16u, RealPt);
	void mouse_do_disable();
	void draw_mouse_ptr_wrapper();
	void call_mouse();
	void draw_mouse_ptr();
	void mouse();
	void mouse_compare();
	void handle_input();
	Bit16u get_mouse_action(Bit16u, Bit16u, Bit8u*);
	void decomp_rle(Bit8u*, Bit8u*, Bit16u, Bit16u, Bit16u, Bit16u, Bit16u);
	void update_mouse_ptr();
	void save_mouse_ptr();
	void do_draw_mouse_ptr();
	void load_font_and_text();
	void split_textbuffer(Bit8u*, RealPt, Bit32u);
	void load_font_and_text_host();
	void split_textbuffer_host(char**, char*, Bit32u);
	void load_page(Bit16u);
	void load_typus(Bit16u);
	void save_chr();
	void read_common_files();
	Bit32s get_archive_offset(const char*, Bit8u*);
	Bit16u open_datfile(Bit16u);
	Bit16u read_datfile(Bit16u, Bit8u*, Bit16u);
	Bit32s get_filelength();
	Bit16u ret_zero1();
	void wait_for_keypress();
	void error_msg(Bit8u*);
	void vsync_or_key(Bit16u);
	Bit32u swap32(Bit16u, Bit16u);
	void init_video();
	void exit_video();
	void draw_v_line(Bit16u, Bit16u, Bit16u, Bit16u);
	void do_draw_pic(Bit16u);
	void draw_popup_line(Bit16u, Bit16u);
	Bit16u infobox(Bit8u*, Bit16u);
	void call_fill_rect_gen(PhysPt, Bit16u, Bit16u, Bit16u, Bit16u, Bit16u);
	void wait_for_vsync();
	void blit_smth3(PhysPt, Bit16u, Bit16u);
	Bit16u print_line(char*);
	void print_str(char *, Bit16u, Bit16u);
	Bit16u str_splitter(char *);
	Bit16u print_chr(unsigned char, Bit16u, Bit16u);
	Bit8u get_chr_info(unsigned char, Bit8u*);
	void call_them_all(Bit16u, Bit16u, Bit16u, Bit16u);
	void fill_smth();
	void fill_smth2(Bit8u*);
	RealPt get_gfx_ptr(Bit16u, Bit16u);
	Bit16u ret_zero();
	void call_blit_smth3(PhysPt, Bit16u, Bit16u, Bit16u, Bit16u);
	void set_vals(Bit16u, Bit16u);
	void get_vals(Bit8u*, Bit8u*);
	Bit16u get_str_width(char*);
	Bit16u get_line_start_c(char*, Bit16u, Bit16u);
	Bit16u enter_string(char*, Bit16u, Bit16u, Bit16u, Bit16u);
	Bit16s gui_bool(Bit8u *);
	void fill_radio_button(Bit16s, Bit16u, Bit16u);
	Bit16s gui_radio(Bit8u *header, Bit8s pos, ...);
	void enter_name();
	void change_head();
	void change_sex();
	void do_gen();
	void calc_at_pa();
	void fill_values();
	void refresh_screen();
	void clear_hero();
	void new_values();
	void skill_inc_novice(Bit16u);
	void spell_inc_novice(Bit16u);
	void select_typus();
	Bit16u can_change_attribs();
	void change_attribs();
	void save_picbuf();
	void restore_picbuf(PhysPt);
	void print_attribs();
	void print_values();
	void make_valuta_str(char *, unsigned int);
	void inc_skill(Bit16u, Bit16u, Bit8u*);
	void select_skill();
	void inc_spell(Bit16u);
	void select_spell();
	void choose_atpa();
	void choose_typus();
	void pal_fade_out(Bit8u*, Bit8u*, Bit16u);
	void pal_fade_in(Bit8u*, Bit8u*, Bit16u, Bit16u);
	void intro();
	void set_mouse_isr();
	void restore_mouse_isr();
	void alloc_buffers();
	void init_colors();
	void init_stuff();
	void *gen_alloc(unsigned long);
	RealPt emu_gen_alloc(Bit32u);
}

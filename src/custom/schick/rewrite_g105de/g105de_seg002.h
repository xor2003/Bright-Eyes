void draw_mouse_ptr_wrapper();
void draw_mouse_ptr();
Bit16u get_mouse_action_gen(Bit16u, Bit16u, Bit8u*);
void do_draw_mouse_ptr();
Bit32s get_archive_offset(Bit8u*, Bit8u*);
Bit32s get_filelength();
Bit16u ret_zero1();
Bit32u swap32(Bit16u, Bit16u);
void init_video();
void exit_video();
void draw_v_line(Bit16u, Bit16u, Bit16u, Bit16u);
void blit_smth3(PhysPt, Bit16u, Bit16u);
Bit16u print_chr(unsigned char, Bit16u, Bit16u);
Bit8u get_chr_info(unsigned char, Bit8u*);
void call_them_all(Bit16u, Bit16u, Bit16u, Bit16u);
void fill_smth();
void fill_smth2(Bit8u*);
RealPt get_gfx_ptr(Bit16u, Bit16u);
Bit16u ret_zero();
void call_fill_rect_gen(PhysPt, Bit16u, Bit16u, Bit16u, Bit16u, Bit16u);
void call_blit_smth3(PhysPt, Bit16u, Bit16u, Bit16u, Bit16u);
void set_vals(Bit16u, Bit16u);
void get_vals(Bit8u*, Bit8u*);
Bit16u get_str_width(char*);
Bit16u get_line_start_c(char*, Bit16u, Bit16u);
void calc_at_pa();
void clear_hero();
void skill_inc_novice(Bit16u);
void spell_inc_novice(Bit16u);
void init_colors();
void init_stuff();

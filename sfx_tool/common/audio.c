
/* SID PAL 8 octaves notes table */
int notes_pal_table[] = {
    0x0117, 0x0127, 0x0139, 0x014b, 0x015f, 0x0174, 0x018a, 0x01a1, 0x01ba, 0x01d4, 0x01f0, 0x020e,
    0x022d, 0x024e, 0x0271, 0x0296, 0x02be, 0x02e8, 0x0314, 0x0343, 0x0374, 0x03a9, 0x03e1, 0x041c,
    0x045a, 0x049c, 0x04e2, 0x052d, 0x057c, 0x05cf, 0x0628, 0x0685, 0x06e8, 0x0752, 0x07c1, 0x0837,
    0x08b4, 0x0939, 0x09c5, 0x0a5a, 0x0af7, 0x0b9e, 0x0c4f, 0x0d0a, 0x0dd1, 0x0ea3, 0x0f82, 0x106e,
    0x1168, 0x1271, 0x138a, 0x14b3, 0x15ee, 0x173c, 0x189e, 0x1a15, 0x1ba2, 0x1d46, 0x1f04, 0x20dc,
    0x22d0, 0x24e2, 0x2714, 0x2967, 0x2bdd, 0x2e79, 0x313c, 0x3429, 0x3744, 0x3a8d, 0x3e08, 0x41b8,
    0x45a1, 0x49c5, 0x4e28, 0x52cd, 0x57ba, 0x5cf1, 0x6278, 0x6853, 0x6e87, 0x751a, 0x7c10, 0x8371,
    0x8b42, 0x9389, 0x9c4f, 0xa59b, 0xaf74, 0xb9e2, 0xc4f0, 0xd0a6, 0xdd0e, 0xea33, 0xf820, 0xffff};

char find_note(unsigned hex_freq)
{
    /* char len = sizeof( notes_pal_table ) / sizeof( notes_pal_table[0] ); */
    char len = sizeof(notes_pal_table) / sizeof(unsigned);

    for (int i = 0; i < len; i++)
        if (notes_pal_table[i] == hex_freq)
            return i;

    return 0;
}

// void hello_world_fill_sfx_struct_generic( struct SIDFX * sidfx ) {
//     sidfx->freq   = 0x0685;
//     sidfx->pwm    = 0x100;
//     sidfx->ctrl   = SID_CTRL_GATE | SID_CTRL_RECT;
//     sidfx->attdec = SID_ATK_2 | SID_DKY_1500;
//     sidfx->susrel = 0xf0 | SID_DKY_1500;
//     sidfx->dfreq  = 0;
//     sidfx->dpwm   = 0;
//     sidfx->time1  = 8;
//     sidfx->time0  = 8;
// }

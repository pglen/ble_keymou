// http://en.wikipedia.org/wiki/Keyboard_layout

#define MODIFIERKEY_CTRL        ( 0x01 | 0xE000 )
#define MODIFIERKEY_SHIFT       ( 0x02 | 0xE000 )
#define MODIFIERKEY_ALT         ( 0x04 | 0xE000 )
#define MODIFIERKEY_GUI         ( 0x08 | 0xE000 )
#define MODIFIERKEY_LEFT_CTRL   ( 0x01 | 0xE000 )
#define MODIFIERKEY_LEFT_SHIFT  ( 0x02 | 0xE000 )
#define MODIFIERKEY_LEFT_ALT    ( 0x04 | 0xE000 )
#define MODIFIERKEY_LEFT_GUI    ( 0x08 | 0xE000 )
#define MODIFIERKEY_RIGHT_CTRL  ( 0x10 | 0xE000 )
#define MODIFIERKEY_RIGHT_SHIFT ( 0x20 | 0xE000 )
#define MODIFIERKEY_RIGHT_ALT   ( 0x40 | 0xE000 )
#define MODIFIERKEY_RIGHT_GUI   ( 0x80 | 0xE000 )

#define KEY_SYSTEM_POWER_DOWN   ( 0x81 | 0xE200 )
#define KEY_SYSTEM_SLEEP        ( 0x82 | 0xE200 )
#define KEY_SYSTEM_WAKE_UP      ( 0x83 | 0xE200 )

/*++++++++++++++++*/
//formerly in ble_hid/hid_dev.h
//not tested yet
#define KEY_MEDIA_POWER          (48 | 0xE400 )  // Power
#define KEY_MEDIA_RESET          (49 | 0xE400 )  // Reset
#define KEY_MEDIA_SLEEP          (50 | 0xE400 )  // Sleep

#define KEY_MEDIA_MENU           (64 | 0xE400 )  // Menu
#define KEY_MEDIA_SELECTION      (128 | 0xE400 ) // Selection
#define KEY_MEDIA_ASSIGN_SEL     (129 | 0xE400 ) // Assign Selection
#define KEY_MEDIA_MODE_STEP      (130 | 0xE400 ) // Mode Step
#define KEY_MEDIA_RECALL_LAST    (131 | 0xE400 ) // Recall Last
#define KEY_MEDIA_QUIT           (148 | 0xE400 ) // Quit
#define KEY_MEDIA_HELP           (149 | 0xE400 ) // Help
#define KEY_MEDIA_CHANNEL_UP     (156 | 0xE400 ) // Channel Increment
#define KEY_MEDIA_CHANNEL_DOWN   (157 | 0xE400 ) // Channel Decrement


#define KEY_MEDIA_SELECT_DISC    (186 | 0xE400 ) // Select Disk
#define KEY_MEDIA_ENTER_DISC     (187 | 0xE400 ) // Enter Disc
#define KEY_MEDIA_REPEAT         (188 | 0xE400 ) // Repeat

#define KEY_MEDIA_VOLUME         (224 | 0xE400 ) // Volume
#define KEY_MEDIA_BALANCE        (225 | 0xE400 ) // Balance
#define KEY_MEDIA_BASS           (227 | 0xE400 ) // Bass
/*++++++++++++++++*/


#define KEY_MEDIA_PLAY          ( 0xB0 | 0xE400 )
#define KEY_MEDIA_PAUSE         ( 0xB1 | 0xE400 )
#define KEY_MEDIA_RECORD        ( 0xB2 | 0xE400 )
#define KEY_MEDIA_FAST_FORWARD  ( 0xB3 | 0xE400 )
#define KEY_MEDIA_REWIND        ( 0xB4 | 0xE400 )
#define KEY_MEDIA_NEXT_TRACK    ( 0xB5 | 0xE400 )
#define KEY_MEDIA_PREV_TRACK    ( 0xB6 | 0xE400 )
#define KEY_MEDIA_STOP          ( 0xB7 | 0xE400 )
#define KEY_MEDIA_EJECT         ( 0xB8 | 0xE400 )
#define KEY_MEDIA_RANDOM_PLAY   ( 0xB9 | 0xE400 )
#define KEY_MEDIA_STOP_EJECT    ( 0xCC | 0xE400 )
#define KEY_MEDIA_PLAY_PAUSE    ( 0xCD | 0xE400 )
#define KEY_MEDIA_PLAY_SKIP     ( 0xCE | 0xE400 )
#define KEY_MEDIA_MUTE          ( 0xE2 | 0xE400 )
#define KEY_MEDIA_VOLUME_INC    ( 0xE9 | 0xE400 )
#define KEY_MEDIA_VOLUME_DEC    ( 0xEA | 0xE400 )

#define KEY_A                   (   4  | 0xF000 )
#define KEY_B                   (   5  | 0xF000 )
#define KEY_C                   (   6  | 0xF000 )
#define KEY_D                   (   7  | 0xF000 )
#define KEY_E                   (   8  | 0xF000 )
#define KEY_F                   (   9  | 0xF000 )
#define KEY_G                   (  10  | 0xF000 )
#define KEY_H                   (  11  | 0xF000 )
#define KEY_I                   (  12  | 0xF000 )
#define KEY_J                   (  13  | 0xF000 )
#define KEY_K                   (  14  | 0xF000 )
#define KEY_L                   (  15  | 0xF000 )
#define KEY_M                   (  16  | 0xF000 )
#define KEY_N                   (  17  | 0xF000 )
#define KEY_O                   (  18  | 0xF000 )
#define KEY_P                   (  19  | 0xF000 )
#define KEY_Q                   (  20  | 0xF000 )
#define KEY_R                   (  21  | 0xF000 )
#define KEY_S                   (  22  | 0xF000 )
#define KEY_T                   (  23  | 0xF000 )
#define KEY_U                   (  24  | 0xF000 )
#define KEY_V                   (  25  | 0xF000 )
#define KEY_W                   (  26  | 0xF000 )
#define KEY_X                   (  27  | 0xF000 )
#define KEY_Y                   (  28  | 0xF000 )
#define KEY_Z                   (  29  | 0xF000 )
#define KEY_1                   (  30  | 0xF000 )
#define KEY_2                   (  31  | 0xF000 )
#define KEY_3                   (  32  | 0xF000 )
#define KEY_4                   (  33  | 0xF000 )
#define KEY_5                   (  34  | 0xF000 )
#define KEY_6                   (  35  | 0xF000 )
#define KEY_7                   (  36  | 0xF000 )
#define KEY_8                   (  37  | 0xF000 )
#define KEY_9                   (  38  | 0xF000 )
#define KEY_0                   (  39  | 0xF000 )
#define KEY_ENTER               (  40  | 0xF000 )
#define KEY_ESC                 (  41  | 0xF000 )
#define KEY_BACKSPACE           (  42  | 0xF000 )
#define KEY_TAB                 (  43  | 0xF000 )
#define KEY_SPACE               (  44  | 0xF000 )
#define KEY_MINUS               (  45  | 0xF000 )
#define KEY_EQUAL               (  46  | 0xF000 )
#define KEY_LEFT_BRACE          (  47  | 0xF000 )
#define KEY_RIGHT_BRACE         (  48  | 0xF000 )
#define KEY_BACKSLASH           (  49  | 0xF000 )
#define KEY_NON_US_NUM          (  50  | 0xF000 )
#define KEY_SEMICOLON           (  51  | 0xF000 )
#define KEY_QUOTE               (  52  | 0xF000 )
#define KEY_TILDE               (  53  | 0xF000 )
#define KEY_COMMA               (  54  | 0xF000 )
#define KEY_PERIOD              (  55  | 0xF000 )
#define KEY_SLASH               (  56  | 0xF000 )
#define KEY_CAPS_LOCK           (  57  | 0xF000 )
#define KEY_F1                  (  58  | 0xF000 )
#define KEY_F2                  (  59  | 0xF000 )
#define KEY_F3                  (  60  | 0xF000 )
#define KEY_F4                  (  61  | 0xF000 )
#define KEY_F5                  (  62  | 0xF000 )
#define KEY_F6                  (  63  | 0xF000 )
#define KEY_F7                  (  64  | 0xF000 )
#define KEY_F8                  (  65  | 0xF000 )
#define KEY_F9                  (  66  | 0xF000 )
#define KEY_F10                 (  67  | 0xF000 )
#define KEY_F11                 (  68  | 0xF000 )
#define KEY_F12                 (  69  | 0xF000 )
#define KEY_PRINTSCREEN         (  70  | 0xF000 )
#define KEY_SCROLL_LOCK         (  71  | 0xF000 )
#define KEY_PAUSE               (  72  | 0xF000 )
#define KEY_INSERT              (  73  | 0xF000 )
#define KEY_HOME                (  74  | 0xF000 )
#define KEY_PAGE_UP             (  75  | 0xF000 )
#define KEY_DELETE              (  76  | 0xF000 )
#define KEY_END                 (  77  | 0xF000 )
#define KEY_PAGE_DOWN           (  78  | 0xF000 )
#define KEY_RIGHT               (  79  | 0xF000 )
#define KEY_LEFT                (  80  | 0xF000 )
#define KEY_DOWN                (  81  | 0xF000 )
#define KEY_UP                  (  82  | 0xF000 )
#define KEY_NUM_LOCK            (  83  | 0xF000 )
#define KEYPAD_SLASH            (  84  | 0xF000 )
#define KEYPAD_ASTERIX          (  85  | 0xF000 )
#define KEYPAD_MINUS            (  86  | 0xF000 )
#define KEYPAD_PLUS             (  87  | 0xF000 )
#define KEYPAD_ENTER            (  88  | 0xF000 )
#define KEYPAD_1                (  89  | 0xF000 )
#define KEYPAD_2                (  90  | 0xF000 )
#define KEYPAD_3                (  91  | 0xF000 )
#define KEYPAD_4                (  92  | 0xF000 )
#define KEYPAD_5                (  93  | 0xF000 )
#define KEYPAD_6                (  94  | 0xF000 )
#define KEYPAD_7                (  95  | 0xF000 )
#define KEYPAD_8                (  96  | 0xF000 )
#define KEYPAD_9                (  97  | 0xF000 )
#define KEYPAD_0                (  98  | 0xF000 )
#define KEYPAD_PERIOD           (  99  | 0xF000 )
#define KEY_NON_US_BS           ( 100  | 0xF000 )
#define KEY_MENU            ( 101  | 0xF000 )
#define KEY_F13                 ( 104  | 0xF000 )
#define KEY_F14                 ( 105  | 0xF000 )
#define KEY_F15                 ( 106  | 0xF000 )
#define KEY_F16                 ( 107  | 0xF000 )
#define KEY_F17                 ( 108  | 0xF000 )
#define KEY_F18                 ( 109  | 0xF000 )
#define KEY_F19                 ( 110  | 0xF000 )
#define KEY_F20                 ( 111  | 0xF000 )
#define KEY_F21                 ( 112  | 0xF000 )
#define KEY_F22                 ( 113  | 0xF000 )
#define KEY_F23                 ( 114  | 0xF000 )
#define KEY_F24                 ( 115  | 0xF000 )

// for compatibility with Leonardo's slightly different names
#define KEY_UP_ARROW    KEY_UP
#define KEY_DOWN_ARROW    KEY_DOWN
#define KEY_LEFT_ARROW    KEY_LEFT
#define KEY_RIGHT_ARROW    KEY_RIGHT
#define KEY_RETURN    KEY_ENTER
#define KEY_LEFT_CTRL    MODIFIERKEY_LEFT_CTRL
#define KEY_LEFT_SHIFT    MODIFIERKEY_LEFT_SHIFT
#define KEY_LEFT_ALT    MODIFIERKEY_LEFT_ALT
#define KEY_LEFT_GUI    MODIFIERKEY_LEFT_GUI
#define KEY_RIGHT_CTRL    MODIFIERKEY_RIGHT_CTRL
#define KEY_RIGHT_SHIFT    MODIFIERKEY_RIGHT_SHIFT
#define KEY_RIGHT_ALT    MODIFIERKEY_RIGHT_ALT
#define KEY_RIGHT_GUI    MODIFIERKEY_RIGHT_GUI


#define SHIFT_MASK        0x40
#define KEYCODE_TYPE        uint8_t
#define KEYCODE_MASK        0x007F

#define ASCII_20    KEY_SPACE                // 32
#define ASCII_21    KEY_1 + SHIFT_MASK            // 33 !
#define ASCII_22    KEY_QUOTE + SHIFT_MASK            // 34 "
#define ASCII_23    KEY_3 + SHIFT_MASK            // 35 #
#define ASCII_24    KEY_4 + SHIFT_MASK            // 36 $
#define ASCII_25    KEY_5 + SHIFT_MASK            // 37 %
#define ASCII_26    KEY_7 + SHIFT_MASK            // 38 &
#define ASCII_27    KEY_QUOTE                // 39 '
#define ASCII_28    KEY_9 + SHIFT_MASK            // 40 (
#define ASCII_29    KEY_0 + SHIFT_MASK            // 41 )
#define ASCII_2A    KEY_8 + SHIFT_MASK            // 42 *
#define ASCII_2B    KEY_EQUAL + SHIFT_MASK            // 43 +
#define ASCII_2C    KEY_COMMA                // 44 ,
#define ASCII_2D    KEY_MINUS                // 45 -
#define ASCII_2E    KEY_PERIOD                // 46 .
#define ASCII_2F    KEY_SLASH                // 47 /
#define ASCII_30    KEY_0                    // 48 0
#define ASCII_31    KEY_1                    // 49 1
#define ASCII_32    KEY_2                    // 50 2
#define ASCII_33    KEY_3                    // 51 3
#define ASCII_34    KEY_4                    // 52 4
#define ASCII_35    KEY_5                    // 53 5
#define ASCII_36    KEY_6                    // 54 6
#define ASCII_37    KEY_7                    // 55 7
#define ASCII_38    KEY_8                    // 55 8
#define ASCII_39    KEY_9                    // 57 9
#define ASCII_3A    KEY_SEMICOLON + SHIFT_MASK        // 58 :
#define ASCII_3B    KEY_SEMICOLON                // 59 ;
#define ASCII_3C    KEY_COMMA + SHIFT_MASK            // 60 <
#define ASCII_3D    KEY_EQUAL                // 61 =
#define ASCII_3E    KEY_PERIOD + SHIFT_MASK            // 62 >
#define ASCII_3F    KEY_SLASH + SHIFT_MASK            // 63 ?
#define ASCII_40    KEY_2 + SHIFT_MASK            // 64 @
#define ASCII_41    KEY_A + SHIFT_MASK            // 65 A
#define ASCII_42    KEY_B + SHIFT_MASK            // 66 B
#define ASCII_43    KEY_C + SHIFT_MASK            // 67 C
#define ASCII_44    KEY_D + SHIFT_MASK            // 68 D
#define ASCII_45    KEY_E + SHIFT_MASK            // 69 E
#define ASCII_46    KEY_F + SHIFT_MASK            // 70 F
#define ASCII_47    KEY_G + SHIFT_MASK            // 71 G
#define ASCII_48    KEY_H + SHIFT_MASK            // 72 H
#define ASCII_49    KEY_I + SHIFT_MASK            // 73 I
#define ASCII_4A    KEY_J + SHIFT_MASK            // 74 J
#define ASCII_4B    KEY_K + SHIFT_MASK            // 75 K
#define ASCII_4C    KEY_L + SHIFT_MASK            // 76 L
#define ASCII_4D    KEY_M + SHIFT_MASK            // 77 M
#define ASCII_4E    KEY_N + SHIFT_MASK            // 78 N
#define ASCII_4F    KEY_O + SHIFT_MASK            // 79 O
#define ASCII_50    KEY_P + SHIFT_MASK            // 80 P
#define ASCII_51    KEY_Q + SHIFT_MASK            // 81 Q
#define ASCII_52    KEY_R + SHIFT_MASK            // 82 R
#define ASCII_53    KEY_S + SHIFT_MASK            // 83 S
#define ASCII_54    KEY_T + SHIFT_MASK            // 84 T
#define ASCII_55    KEY_U + SHIFT_MASK            // 85 U
#define ASCII_56    KEY_V + SHIFT_MASK            // 86 V
#define ASCII_57    KEY_W + SHIFT_MASK            // 87 W
#define ASCII_58    KEY_X + SHIFT_MASK            // 88 X
#define ASCII_59    KEY_Y + SHIFT_MASK            // 89 Y
#define ASCII_5A    KEY_Z + SHIFT_MASK            // 90 Z
#define ASCII_5B    KEY_LEFT_BRACE                // 91 [
#define ASCII_5C    KEY_BACKSLASH                // 92
#define ASCII_5D    KEY_RIGHT_BRACE                // 93 ]
#define ASCII_5E    KEY_6 + SHIFT_MASK            // 94 ^
#define ASCII_5F    KEY_MINUS + SHIFT_MASK            // 95 _
#define ASCII_60    KEY_TILDE                // 96 `
#define ASCII_61    KEY_A                    // 97 a
#define ASCII_62    KEY_B                    // 98 b
#define ASCII_63    KEY_C                    // 99 c
#define ASCII_64    KEY_D                    // 100 d
#define ASCII_65    KEY_E                    // 101 e
#define ASCII_66    KEY_F                    // 102 f
#define ASCII_67    KEY_G                    // 103 g
#define ASCII_68    KEY_H                    // 104 h
#define ASCII_69    KEY_I                    // 105 i
#define ASCII_6A    KEY_J                    // 106 j
#define ASCII_6B    KEY_K                    // 107 k
#define ASCII_6C    KEY_L                    // 108 l
#define ASCII_6D    KEY_M                    // 109 m
#define ASCII_6E    KEY_N                    // 110 n
#define ASCII_6F    KEY_O                    // 111 o
#define ASCII_70    KEY_P                    // 112 p
#define ASCII_71    KEY_Q                    // 113 q
#define ASCII_72    KEY_R                    // 114 r
#define ASCII_73    KEY_S                    // 115 s
#define ASCII_74    KEY_T                    // 116 t
#define ASCII_75    KEY_U                    // 117 u
#define ASCII_76    KEY_V                    // 118 v
#define ASCII_77    KEY_W                    // 119 w
#define ASCII_78    KEY_X                    // 120 x
#define ASCII_79    KEY_Y                    // 121 y
#define ASCII_7A    KEY_Z                    // 122 z
#define ASCII_7B    KEY_LEFT_BRACE + SHIFT_MASK        // 123 {
#define ASCII_7C    KEY_BACKSLASH + SHIFT_MASK        // 124 |
#define ASCII_7D    KEY_RIGHT_BRACE + SHIFT_MASK        // 125 }
#define ASCII_7E    KEY_TILDE + SHIFT_MASK            // 126 ~
#define ASCII_7F    KEY_BACKSPACE                // 127

/****************************************************************/
/*
  This header file contains the scan codes and some ascii codes of
  keys on the keyboard.
*/
/****************************************************************/

#define LASTCOL    79   /* Last column on screen(numbered 0-79) */
#define LASTROW    24   /* Last row on screen(0-24) */
#define ESC 27     /* ASCII escape */

/* Scancodes for shift and capslock keys: */

#define LSHIFT_PRESSED 0x2A          /* Scan codes for shift press, */
#define LSHIFT_RELEASED 0xAA        /* shift release and capslock  */
#define RSHIFT_PRESSED 0x36        /* keys.                       */
#define RSHIFT_RELEASED 0xB6
#define CAPSLOCK 0x3A
#define CAPSLOCK_RELEASED 0xBA

/* scancodes for arrow keys: */

#define CODE_UP    72
#define CODE_DOWN  80
#define CODE_LEFT  75
#define CODE_RIGHT 77

/* scancodes for function keys (for project 5) */

#define F1 0x3B
#define F2 0x3C

/* ASCII codes to use for arrow keys: */

#define ASC_UP    '\200'
#define ASC_DOWN  '\201'
#define ASC_LEFT  '\202'
#define ASC_RIGHT '\203'

#define BACKSPACE  8       /* Ascii codes for Backspace, Tab and enter */
#define TAB        9      /* keys.                                    */
#define ENTER_KEY  13

char asccode[58][2] =

/* Array containing ascii codes for appropriate scan codes */
     {
       {   0,0   } ,      // 0
       { ESC,ESC } ,
       { '1','!' } ,
       { '2','@' } ,
       { '3','#' } ,
       { '4','$' } ,
       { '5','%' } ,
       { '6','^' } ,
       { '7','&' } ,
       { '8','*' } ,
       { '9','(' } ,         // 10
       { '0',')' } ,
       { '-','_' } ,
       { '=','+' } ,
       {   8,8   } ,
       {   9,9   } ,
       { 'q','Q' } ,
       { 'w','W' } ,
       { 'e','E' } ,
       { 'r','R' } ,
       { 't','T' } ,          //20
       { 'y','Y' } ,
       { 'u','U' } ,
       { 'i','I' } ,
       { 'o','O' } ,
       { 'p','P' } ,
       { '[','{' } ,
       { ']','}' } ,
       {  13,13  } ,
       {   0,0   } ,
       { 'a','A' } ,          // 30
       { 's','S' } ,
       { 'd','D' } ,
       { 'f','F' } ,
       { 'g','G' } ,
       { 'h','H' } ,
       { 'j','J' } ,
       { 'k','K' } ,
       { 'l','L' } ,
       { ';',':' } ,
       {  39,34  } ,          // 40
       { '`','~' } ,
       {   0,0   } ,
       { '\\','|'} ,
       { 'z','Z' } ,
       { 'x','X' } ,
       { 'c','C' } ,
       { 'v','V' } ,
       { 'b','B' } ,
       { 'n','N' } ,
       { 'm','M' } ,          // 50
       { ',','<' } ,
       { '.','>' } ,
       { '/','?' } ,
       {   0,0   } ,
       {   0,0   } ,
       {   0,0   } ,
       { ' ',' ' } ,
   };

const uint16_t keycodes_ascii[96] = {
    ASCII_20, ASCII_21, ASCII_22, ASCII_23,
    ASCII_24, ASCII_25, ASCII_26, ASCII_27,
    ASCII_28, ASCII_29, ASCII_2A, ASCII_2B,
    ASCII_2C, ASCII_2D, ASCII_2E, ASCII_2F,
    ASCII_30, ASCII_31, ASCII_32, ASCII_33,
    ASCII_34, ASCII_35, ASCII_36, ASCII_37,
    ASCII_38, ASCII_39, ASCII_3A, ASCII_3B,
    ASCII_3C, ASCII_3D, ASCII_3E, ASCII_3F,
    ASCII_40, ASCII_41, ASCII_42, ASCII_43,
    ASCII_44, ASCII_45, ASCII_46, ASCII_47,
    ASCII_48, ASCII_49, ASCII_4A, ASCII_4B,
    ASCII_4C, ASCII_4D, ASCII_4E, ASCII_4F,
    ASCII_50, ASCII_51, ASCII_52, ASCII_53,
    ASCII_54, ASCII_55, ASCII_56, ASCII_57,
    ASCII_58, ASCII_59, ASCII_5A, ASCII_5B,
    ASCII_5C, ASCII_5D, ASCII_5E, ASCII_5F,
    ASCII_60, ASCII_61, ASCII_62, ASCII_63,
    ASCII_64, ASCII_65, ASCII_66, ASCII_67,
    ASCII_68, ASCII_69, ASCII_6A, ASCII_6B,
    ASCII_6C, ASCII_6D, ASCII_6E, ASCII_6F,
    ASCII_70, ASCII_71, ASCII_72, ASCII_73,
    ASCII_74, ASCII_75, ASCII_76, ASCII_77,
    ASCII_78, ASCII_79, ASCII_7A, ASCII_7B,
    ASCII_7C, ASCII_7D, ASCII_7E, ASCII_7F
  };


// EOF


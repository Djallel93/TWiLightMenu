/*======================================================================

TOP_FONT texture coordinates

======================================================================*/

#ifndef TOP_FONT__H
#define TOP_FONT__H
#define TOP_FONT_NUM_IMAGES  0x186

// U,V,Width,Height

#define TEXT_TY 16

// The U coordinates are invalid
static constexpr unsigned int top_font_texcoords[] = {
    0, 0, 4, TEXT_TY, // SPACE
    12, 0, 5, TEXT_TY, // EXCLAMATION MARK
    24, 0, 6, TEXT_TY, // QUOTATION MARK
    36, 0, 9, TEXT_TY, // NUMBER SIGN
    48, 0, 9, TEXT_TY, // DOLLAR SIGN
    60, 0, 12, TEXT_TY, // PERCENT SIGN
    72, 0, 9, TEXT_TY, // AMPERSAND
    84, 0, 5, TEXT_TY, // APOSTROPHE
    96, 0, 5, TEXT_TY, // LEFT PARENTHESIS
    108, 0, 5, TEXT_TY, // RIGHT PARENTHESIS
    120, 0, 6, TEXT_TY, // ASTERISK
    132, 0, 9, TEXT_TY, // PLUS SIGN
    144, 0, 5, TEXT_TY, // COMMA
    156, 0, 6, TEXT_TY, // HYPHEN-MINUS
    168, 0, 3, TEXT_TY, // FULL STOP
    180, 0, 6, TEXT_TY, // SOLIDUS
    192, 0, 9, TEXT_TY, // DIGIT ZERO
    204, 0, 9, TEXT_TY, // DIGIT ONE
    216, 0, 9, TEXT_TY, // DIGIT TWO
    228, 0, 9, TEXT_TY, // DIGIT THREE
    240, 0, 9, TEXT_TY, // DIGIT FOUR
    252, 0, 9, TEXT_TY, // DIGIT FIVE
    264, 0, 9, TEXT_TY, // DIGIT SIX
    276, 0, 9, TEXT_TY, // DIGIT SEVEN
    288, 0, 9, TEXT_TY, // DIGIT EIGHT
    300, 0, 9, TEXT_TY, // DIGIT NINE
    312, 0, 5, TEXT_TY, // COLON
    324, 0, 5, TEXT_TY, // SEMICOLON
    336, 0, 9, TEXT_TY, // LESS-THAN SIGN
    348, 0, 9, TEXT_TY, // EQUALS SIGN
    360, 0, 9, TEXT_TY, // GREATER-THAN SIGN
    372, 0, 9, TEXT_TY, // QUESTION MARK
    384, 0, 11, TEXT_TY, // COMMERCIAL AT
    396, 0, 9, TEXT_TY, // LATIN CAPITAL LETTER A
    408, 0, 9, TEXT_TY, // LATIN CAPITAL LETTER B
    420, 0, 9, TEXT_TY, // LATIN CAPITAL LETTER C
    432, 0, 9, TEXT_TY, // LATIN CAPITAL LETTER D
    444, 0, 8, TEXT_TY, // LATIN CAPITAL LETTER E
    456, 0, 7, TEXT_TY, // LATIN CAPITAL LETTER F
    468, 0, 9, TEXT_TY, // LATIN CAPITAL LETTER G
    480, 0, 9, TEXT_TY, // LATIN CAPITAL LETTER H
    492, 0, 3, TEXT_TY, // LATIN CAPITAL LETTER I
    0, 16, 5, TEXT_TY, // LATIN CAPITAL LETTER J
    12, 16, 9, TEXT_TY, // LATIN CAPITAL LETTER K
    24, 16, 7, TEXT_TY, // LATIN CAPITAL LETTER L
    36, 16, 11, TEXT_TY, // LATIN CAPITAL LETTER M
    48, 16, 8, TEXT_TY, // LATIN CAPITAL LETTER N
    60, 16, 10, TEXT_TY, // LATIN CAPITAL LETTER O
    72, 16, 8, TEXT_TY, // LATIN CAPITAL LETTER P
    84, 16, 10, TEXT_TY, // LATIN CAPITAL LETTER Q
    96, 16, 9, TEXT_TY, // LATIN CAPITAL LETTER R
    108, 16, 8, TEXT_TY, // LATIN CAPITAL LETTER S
    120, 16, 8, TEXT_TY, // LATIN CAPITAL LETTER T
    132, 16, 9, TEXT_TY, // LATIN CAPITAL LETTER U
    144, 16, 9, TEXT_TY, // LATIN CAPITAL LETTER V
    156, 16, 12, TEXT_TY, // LATIN CAPITAL LETTER W
    168, 16, 8, TEXT_TY, // LATIN CAPITAL LETTER X
    180, 16, 8, TEXT_TY, // LATIN CAPITAL LETTER Y
    192, 16, 8, TEXT_TY, // LATIN CAPITAL LETTER Z
    204, 16, 5, TEXT_TY, // LEFT SQUARE BRACKET
    216, 16, 6, TEXT_TY, // REVERSE SOLIDUS
    228, 16, 5, TEXT_TY, // RIGHT SQUARE BRACKET
    240, 16, 9, TEXT_TY, // CIRCUMFLEX ACCENT
    252, 16, 6, TEXT_TY, // LOW LINE
    264, 16, 5, TEXT_TY, // GRAVE ACCENT
    276, 16, 7, TEXT_TY, // LATIN SMALL LETTER A
    288, 16, 7, TEXT_TY, // LATIN SMALL LETTER B
    300, 16, 7, TEXT_TY, // LATIN SMALL LETTER C
    312, 16, 8, TEXT_TY, // LATIN SMALL LETTER D
    324, 16, 7, TEXT_TY, // LATIN SMALL LETTER E
    336, 16, 4, TEXT_TY, // LATIN SMALL LETTER F
    348, 16, 7, TEXT_TY, // LATIN SMALL LETTER G
    360, 16, 7, TEXT_TY, // LATIN SMALL LETTER H
    372, 16, 3, TEXT_TY, // LATIN SMALL LETTER I
    384, 16, 5, TEXT_TY, // LATIN SMALL LETTER J
    396, 16, 7, TEXT_TY, // LATIN SMALL LETTER K
    408, 16, 3, TEXT_TY, // LATIN SMALL LETTER L
    420, 16, 11, TEXT_TY, // LATIN SMALL LETTER M
    432, 16, 7, TEXT_TY, // LATIN SMALL LETTER N
    444, 16, 8, TEXT_TY, // LATIN SMALL LETTER O
    456, 16, 7, TEXT_TY, // LATIN SMALL LETTER P
    468, 16, 8, TEXT_TY, // LATIN SMALL LETTER Q
    480, 16, 5, TEXT_TY, // LATIN SMALL LETTER R
    492, 16, 7, TEXT_TY, // LATIN SMALL LETTER S
    0, 32, 5, TEXT_TY, // LATIN SMALL LETTER T
    12, 32, 7, TEXT_TY, // LATIN SMALL LETTER U
    24, 32, 7, TEXT_TY, // LATIN SMALL LETTER V
    36, 32, 10, TEXT_TY, // LATIN SMALL LETTER W
    48, 32, 7, TEXT_TY, // LATIN SMALL LETTER X
    60, 32, 7, TEXT_TY, // LATIN SMALL LETTER Y
    72, 32, 7, TEXT_TY, // LATIN SMALL LETTER Z
    84, 32, 5, TEXT_TY, // LEFT CURLY BRACKET
    96, 32, 5, TEXT_TY, // VERTICAL LINE
    108, 32, 5, TEXT_TY, // RIGHT CURLY BRACKET
    120, 32, 6, TEXT_TY, // TILDE
    132, 32, 5, TEXT_TY, // INVERTED EXCLAMATION MARK
    144, 32, 7, TEXT_TY, // CENT SIGN
    156, 32, 9, TEXT_TY, // POUND SIGN
    168, 32, 10, TEXT_TY, // COPYRIGHT SIGN
    180, 32, 10, TEXT_TY, // REGISTERED SIGN
    192, 32, 4, TEXT_TY, // DEGREE SIGN
    204, 32, 8, TEXT_TY, // PLUS-MINUS SIGN
    216, 32, 6, TEXT_TY, // ACUTE ACCENT
    228, 32, 9, TEXT_TY, // INVERTED QUESTION MARK
    240, 32, 9, TEXT_TY, // LATIN CAPITAL LETTER A WITH GRAVE
    252, 32, 9, TEXT_TY, // LATIN CAPITAL LETTER A WITH ACUTE
    264, 32, 9, TEXT_TY, // LATIN CAPITAL LETTER A WITH CIRCUMFLEX
    276, 32, 9, TEXT_TY, // LATIN CAPITAL LETTER A WITH DIAERESIS
    288, 32, 9, TEXT_TY, // LATIN CAPITAL LETTER C WITH CEDILLA
    300, 32, 8, TEXT_TY, // LATIN CAPITAL LETTER E WITH GRAVE
    312, 32, 8, TEXT_TY, // LATIN CAPITAL LETTER E WITH ACUTE
    324, 32, 8, TEXT_TY, // LATIN CAPITAL LETTER E WITH CIRCUMFLEX
    336, 32, 8, TEXT_TY, // LATIN CAPITAL LETTER E WITH DIAERESIS
    348, 32, 5, TEXT_TY, // LATIN CAPITAL LETTER I WITH GRAVE
    360, 32, 5, TEXT_TY, // LATIN CAPITAL LETTER I WITH ACUTE
    372, 32, 5, TEXT_TY, // LATIN CAPITAL LETTER I WITH CIRCUMFLEX
    384, 32, 5, TEXT_TY, // LATIN CAPITAL LETTER I WITH DIAERESIS
    396, 32, 9, TEXT_TY, // LATIN CAPITAL LETTER N WITH TILDE
    408, 32, 10, TEXT_TY, // LATIN CAPITAL LETTER O WITH GRAVE
    420, 32, 10, TEXT_TY, // LATIN CAPITAL LETTER O WITH ACUTE
    432, 32, 10, TEXT_TY, // LATIN CAPITAL LETTER O WITH CIRCUMFLEX
    444, 32, 10, TEXT_TY, // LATIN CAPITAL LETTER O WITH DIAERESIS
    456, 32, 8, TEXT_TY, // MULTIPLICATION SIGN
    468, 32, 9, TEXT_TY, // LATIN CAPITAL LETTER U WITH GRAVE
    480, 32, 9, TEXT_TY, // LATIN CAPITAL LETTER U WITH ACUTE
    492, 32, 9, TEXT_TY, // LATIN CAPITAL LETTER U WITH CIRCUMFLEX
    0, 48, 9, TEXT_TY, // LATIN CAPITAL LETTER U WITH DIAERESIS
    12, 48, 8, TEXT_TY, // LATIN SMALL LETTER SHARP S
    24, 48, 7, TEXT_TY, // LATIN SMALL LETTER A WITH GRAVE
    36, 48, 7, TEXT_TY, // LATIN SMALL LETTER A WITH ACUTE
    48, 48, 7, TEXT_TY, // LATIN SMALL LETTER A WITH CIRCUMFLEX
    60, 48, 7, TEXT_TY, // LATIN SMALL LETTER A WITH DIAERESIS
    72, 48, 7, TEXT_TY, // LATIN SMALL LETTER C WITH CEDILLA
    84, 48, 8, TEXT_TY, // LATIN SMALL LETTER E WITH GRAVE
    96, 48, 8, TEXT_TY, // LATIN SMALL LETTER E WITH ACUTE
    108, 48, 8, TEXT_TY, // LATIN SMALL LETTER E WITH CIRCUMFLEX
    120, 48, 8, TEXT_TY, // LATIN SMALL LETTER E WITH DIAERESIS
    132, 48, 5, TEXT_TY, // LATIN SMALL LETTER I WITH GRAVE
    144, 48, 5, TEXT_TY, // LATIN SMALL LETTER I WITH ACUTE
    156, 48, 6, TEXT_TY, // LATIN SMALL LETTER I WITH CIRCUMFLEX
    168, 48, 5, TEXT_TY, // LATIN SMALL LETTER I WITH DIAERESIS
    180, 48, 8, TEXT_TY, // LATIN SMALL LETTER N WITH TILDE
    192, 48, 8, TEXT_TY, // LATIN SMALL LETTER O WITH GRAVE
    204, 48, 8, TEXT_TY, // LATIN SMALL LETTER O WITH ACUTE
    216, 48, 8, TEXT_TY, // LATIN SMALL LETTER O WITH CIRCUMFLEX
    228, 48, 8, TEXT_TY, // LATIN SMALL LETTER O WITH DIAERESIS
    240, 48, 8, TEXT_TY, // DIVISION SIGN
    252, 48, 8, TEXT_TY, // LATIN SMALL LETTER U WITH GRAVE
    264, 48, 8, TEXT_TY, // LATIN SMALL LETTER U WITH ACUTE
    276, 48, 8, TEXT_TY, // LATIN SMALL LETTER U WITH CIRCUMFLEX
    288, 48, 8, TEXT_TY, // LATIN SMALL LETTER U WITH DIAERESIS
    300, 48, 11, TEXT_TY, // LATIN CAPITAL LIGATURE OE
    312, 48, 12, TEXT_TY, // LATIN SMALL LIGATURE OE
    324, 48, 5, TEXT_TY, // LEFT DOUBLE QUOTATION MARK
    336, 48, 5, TEXT_TY, // RIGHT DOUBLE QUOTATION MARK
    348, 48, 5, TEXT_TY, // BULLET
    360, 48, 12, TEXT_TY, // HORIZONTAL ELLIPSIS
    372, 48, 12, TEXT_TY, // DOUBLE PRIME
    384, 48, 12, TEXT_TY, // REFERENCE MARK
    396, 48, 9, TEXT_TY, // EURO SIGN
    408, 48, 10, TEXT_TY, // TRADE MARK SIGN
    420, 48, 12, TEXT_TY, // LEFTWARDS ARROW
    432, 48, 12, TEXT_TY, // UPWARDS ARROW
    444, 48, 12, TEXT_TY, // RIGHTWARDS ARROW
    456, 48, 12, TEXT_TY, // DOWNWARDS ARROW
    468, 48, 12, TEXT_TY, // INFINITY
    480, 48, 12, TEXT_TY, // THEREFORE
    492, 48, 12, TEXT_TY, // BLACK SQUARE
    0, 64, 12, TEXT_TY, // WHITE SQUARE
    12, 64, 12, TEXT_TY, // BLACK UP-POINTING TRIANGLE
    24, 64, 12, TEXT_TY, // WHITE UP-POINTING TRIANGLE
    36, 64, 12, TEXT_TY, // BLACK DOWN-POINTING TRIANGLE
    48, 64, 12, TEXT_TY, // WHITE DOWN-POINTING TRIANGLE
    60, 64, 12, TEXT_TY, // BLACK DIAMOND
    72, 64, 12, TEXT_TY, // WHITE DIAMOND
    84, 64, 12, TEXT_TY, // WHITE CIRCLE
    96, 64, 12, TEXT_TY, // BULLSEYE
    108, 64, 12, TEXT_TY, // BLACK CIRCLE
    120, 64, 12, TEXT_TY, // BLACK STAR
    132, 64, 12, TEXT_TY, // WHITE STAR
    144, 64, 12, TEXT_TY, // EIGHTH NOTE
    156, 64, 12, TEXT_TY, // MUSIC FLAT SIGN
    168, 64, 12, TEXT_TY, // IDEOGRAPHIC SPACE
    180, 64, 12, TEXT_TY, // IDEOGRAPHIC COMMA
    192, 64, 12, TEXT_TY, // IDEOGRAPHIC FULL STOP
    204, 64, 12, TEXT_TY, // LEFT CORNER BRACKET
    216, 64, 12, TEXT_TY, // RIGHT CORNER BRACKET
    228, 64, 12, TEXT_TY, // POSTAL MARK
    240, 64, 12, TEXT_TY, // HIRAGANA LETTER SMALL A
    252, 64, 12, TEXT_TY, // HIRAGANA LETTER A
    264, 64, 12, TEXT_TY, // HIRAGANA LETTER SMALL I
    276, 64, 12, TEXT_TY, // HIRAGANA LETTER I
    288, 64, 12, TEXT_TY, // HIRAGANA LETTER SMALL U
    300, 64, 12, TEXT_TY, // HIRAGANA LETTER U
    312, 64, 12, TEXT_TY, // HIRAGANA LETTER SMALL E
    324, 64, 12, TEXT_TY, // HIRAGANA LETTER E
    336, 64, 12, TEXT_TY, // HIRAGANA LETTER SMALL O
    348, 64, 12, TEXT_TY, // HIRAGANA LETTER O
    360, 64, 12, TEXT_TY, // HIRAGANA LETTER KA
    372, 64, 12, TEXT_TY, // HIRAGANA LETTER GA
    384, 64, 12, TEXT_TY, // HIRAGANA LETTER KI
    396, 64, 12, TEXT_TY, // HIRAGANA LETTER GI
    408, 64, 12, TEXT_TY, // HIRAGANA LETTER KU
    420, 64, 12, TEXT_TY, // HIRAGANA LETTER GU
    432, 64, 12, TEXT_TY, // HIRAGANA LETTER KE
    444, 64, 12, TEXT_TY, // HIRAGANA LETTER GE
    456, 64, 12, TEXT_TY, // HIRAGANA LETTER KO
    468, 64, 12, TEXT_TY, // HIRAGANA LETTER GO
    480, 64, 12, TEXT_TY, // HIRAGANA LETTER SA
    492, 64, 12, TEXT_TY, // HIRAGANA LETTER ZA
    0, 80, 12, TEXT_TY, // HIRAGANA LETTER SI
    12, 80, 12, TEXT_TY, // HIRAGANA LETTER ZI
    24, 80, 12, TEXT_TY, // HIRAGANA LETTER SU
    36, 80, 12, TEXT_TY, // HIRAGANA LETTER ZU
    48, 80, 12, TEXT_TY, // HIRAGANA LETTER SE
    60, 80, 12, TEXT_TY, // HIRAGANA LETTER ZE
    72, 80, 12, TEXT_TY, // HIRAGANA LETTER SO
    84, 80, 12, TEXT_TY, // HIRAGANA LETTER ZO
    96, 80, 12, TEXT_TY, // HIRAGANA LETTER TA
    108, 80, 12, TEXT_TY, // HIRAGANA LETTER DA
    120, 80, 12, TEXT_TY, // HIRAGANA LETTER TI
    132, 80, 12, TEXT_TY, // HIRAGANA LETTER DI
    144, 80, 12, TEXT_TY, // HIRAGANA LETTER SMALL TU
    156, 80, 12, TEXT_TY, // HIRAGANA LETTER TU
    168, 80, 12, TEXT_TY, // HIRAGANA LETTER DU
    180, 80, 12, TEXT_TY, // HIRAGANA LETTER TE
    192, 80, 12, TEXT_TY, // HIRAGANA LETTER DE
    204, 80, 12, TEXT_TY, // HIRAGANA LETTER TO
    216, 80, 12, TEXT_TY, // HIRAGANA LETTER DO
    228, 80, 12, TEXT_TY, // HIRAGANA LETTER NA
    240, 80, 12, TEXT_TY, // HIRAGANA LETTER NI
    252, 80, 12, TEXT_TY, // HIRAGANA LETTER NU
    264, 80, 12, TEXT_TY, // HIRAGANA LETTER NE
    276, 80, 12, TEXT_TY, // HIRAGANA LETTER NO
    288, 80, 12, TEXT_TY, // HIRAGANA LETTER HA
    300, 80, 12, TEXT_TY, // HIRAGANA LETTER BA
    312, 80, 12, TEXT_TY, // HIRAGANA LETTER PA
    324, 80, 12, TEXT_TY, // HIRAGANA LETTER HI
    336, 80, 12, TEXT_TY, // HIRAGANA LETTER BI
    348, 80, 12, TEXT_TY, // HIRAGANA LETTER PI
    360, 80, 12, TEXT_TY, // HIRAGANA LETTER HU
    372, 80, 12, TEXT_TY, // HIRAGANA LETTER BU
    384, 80, 12, TEXT_TY, // HIRAGANA LETTER PU
    396, 80, 12, TEXT_TY, // HIRAGANA LETTER HE
    408, 80, 12, TEXT_TY, // HIRAGANA LETTER BE
    420, 80, 12, TEXT_TY, // HIRAGANA LETTER PE
    432, 80, 12, TEXT_TY, // HIRAGANA LETTER HO
    444, 80, 12, TEXT_TY, // HIRAGANA LETTER BO
    456, 80, 12, TEXT_TY, // HIRAGANA LETTER PO
    468, 80, 12, TEXT_TY, // HIRAGANA LETTER MA
    480, 80, 12, TEXT_TY, // HIRAGANA LETTER MI
    492, 80, 12, TEXT_TY, // HIRAGANA LETTER MU
    0, 96, 12, TEXT_TY, // HIRAGANA LETTER ME
    12, 96, 12, TEXT_TY, // HIRAGANA LETTER MO
    24, 96, 12, TEXT_TY, // HIRAGANA LETTER SMALL YA
    36, 96, 12, TEXT_TY, // HIRAGANA LETTER YA
    48, 96, 12, TEXT_TY, // HIRAGANA LETTER SMALL YU
    60, 96, 12, TEXT_TY, // HIRAGANA LETTER YU
    72, 96, 12, TEXT_TY, // HIRAGANA LETTER SMALL YO
    84, 96, 12, TEXT_TY, // HIRAGANA LETTER YO
    96, 96, 12, TEXT_TY, // HIRAGANA LETTER RA
    108, 96, 12, TEXT_TY, // HIRAGANA LETTER RI
    120, 96, 12, TEXT_TY, // HIRAGANA LETTER RU
    132, 96, 12, TEXT_TY, // HIRAGANA LETTER RE
    144, 96, 12, TEXT_TY, // HIRAGANA LETTER RO
    156, 96, 12, TEXT_TY, // HIRAGANA LETTER SMALL WA
    168, 96, 12, TEXT_TY, // HIRAGANA LETTER WA
    180, 96, 12, TEXT_TY, // HIRAGANA LETTER WO
    192, 96, 12, TEXT_TY, // HIRAGANA LETTER N
    204, 96, 12, TEXT_TY, // KATAKANA LETTER SMALL A
    216, 96, 12, TEXT_TY, // KATAKANA LETTER A
    228, 96, 12, TEXT_TY, // KATAKANA LETTER SMALL I
    240, 96, 12, TEXT_TY, // KATAKANA LETTER I
    252, 96, 12, TEXT_TY, // KATAKANA LETTER SMALL U
    264, 96, 12, TEXT_TY, // KATAKANA LETTER U
    276, 96, 12, TEXT_TY, // KATAKANA LETTER SMALL E
    288, 96, 12, TEXT_TY, // KATAKANA LETTER E
    300, 96, 12, TEXT_TY, // KATAKANA LETTER SMALL O
    312, 96, 12, TEXT_TY, // KATAKANA LETTER O
    324, 96, 12, TEXT_TY, // KATAKANA LETTER KA
    336, 96, 12, TEXT_TY, // KATAKANA LETTER GA
    348, 96, 12, TEXT_TY, // KATAKANA LETTER KI
    360, 96, 12, TEXT_TY, // KATAKANA LETTER GI
    372, 96, 12, TEXT_TY, // KATAKANA LETTER KU
    384, 96, 12, TEXT_TY, // KATAKANA LETTER GU
    396, 96, 12, TEXT_TY, // KATAKANA LETTER KE
    408, 96, 12, TEXT_TY, // KATAKANA LETTER GE
    420, 96, 12, TEXT_TY, // KATAKANA LETTER KO
    432, 96, 12, TEXT_TY, // KATAKANA LETTER GO
    444, 96, 12, TEXT_TY, // KATAKANA LETTER SA
    456, 96, 12, TEXT_TY, // KATAKANA LETTER ZA
    468, 96, 12, TEXT_TY, // KATAKANA LETTER SI
    480, 96, 12, TEXT_TY, // KATAKANA LETTER ZI
    492, 96, 12, TEXT_TY, // KATAKANA LETTER SU
    0, 112, 12, TEXT_TY, // KATAKANA LETTER ZU
    12, 112, 12, TEXT_TY, // KATAKANA LETTER SE
    24, 112, 12, TEXT_TY, // KATAKANA LETTER ZE
    36, 112, 12, TEXT_TY, // KATAKANA LETTER SO
    48, 112, 12, TEXT_TY, // KATAKANA LETTER ZO
    60, 112, 12, TEXT_TY, // KATAKANA LETTER TA
    72, 112, 12, TEXT_TY, // KATAKANA LETTER DA
    84, 112, 12, TEXT_TY, // KATAKANA LETTER TI
    96, 112, 12, TEXT_TY, // KATAKANA LETTER DI
    108, 112, 12, TEXT_TY, // KATAKANA LETTER SMALL TU
    120, 112, 12, TEXT_TY, // KATAKANA LETTER TU
    132, 112, 12, TEXT_TY, // KATAKANA LETTER DU
    144, 112, 12, TEXT_TY, // KATAKANA LETTER TE
    156, 112, 12, TEXT_TY, // KATAKANA LETTER DE
    168, 112, 12, TEXT_TY, // KATAKANA LETTER TO
    180, 112, 12, TEXT_TY, // KATAKANA LETTER DO
    192, 112, 12, TEXT_TY, // KATAKANA LETTER NA
    204, 112, 12, TEXT_TY, // KATAKANA LETTER NI
    216, 112, 12, TEXT_TY, // KATAKANA LETTER NU
    228, 112, 12, TEXT_TY, // KATAKANA LETTER NE
    240, 112, 12, TEXT_TY, // KATAKANA LETTER NO
    252, 112, 12, TEXT_TY, // KATAKANA LETTER HA
    264, 112, 12, TEXT_TY, // KATAKANA LETTER BA
    276, 112, 12, TEXT_TY, // KATAKANA LETTER PA
    288, 112, 12, TEXT_TY, // KATAKANA LETTER HI
    300, 112, 12, TEXT_TY, // KATAKANA LETTER BI
    312, 112, 12, TEXT_TY, // KATAKANA LETTER PI
    324, 112, 12, TEXT_TY, // KATAKANA LETTER HU
    336, 112, 12, TEXT_TY, // KATAKANA LETTER BU
    348, 112, 12, TEXT_TY, // KATAKANA LETTER PU
    360, 112, 12, TEXT_TY, // KATAKANA LETTER HE
    372, 112, 12, TEXT_TY, // KATAKANA LETTER BE
    384, 112, 12, TEXT_TY, // KATAKANA LETTER PE
    396, 112, 12, TEXT_TY, // KATAKANA LETTER HO
    408, 112, 12, TEXT_TY, // KATAKANA LETTER BO
    420, 112, 12, TEXT_TY, // KATAKANA LETTER PO
    432, 112, 12, TEXT_TY, // KATAKANA LETTER MA
    444, 112, 12, TEXT_TY, // KATAKANA LETTER MI
    456, 112, 12, TEXT_TY, // KATAKANA LETTER MU
    468, 112, 12, TEXT_TY, // KATAKANA LETTER ME
    480, 112, 12, TEXT_TY, // KATAKANA LETTER MO
    492, 112, 12, TEXT_TY, // KATAKANA LETTER SMALL YA
    0, 128, 12, TEXT_TY, // KATAKANA LETTER YA
    12, 128, 12, TEXT_TY, // KATAKANA LETTER SMALL YU
    24, 128, 12, TEXT_TY, // KATAKANA LETTER YU
    36, 128, 12, TEXT_TY, // KATAKANA LETTER SMALL YO
    48, 128, 12, TEXT_TY, // KATAKANA LETTER YO
    60, 128, 12, TEXT_TY, // KATAKANA LETTER RA
    72, 128, 12, TEXT_TY, // KATAKANA LETTER RI
    84, 128, 12, TEXT_TY, // KATAKANA LETTER RU
    96, 128, 12, TEXT_TY, // KATAKANA LETTER RE
    108, 128, 12, TEXT_TY, // KATAKANA LETTER RO
    120, 128, 12, TEXT_TY, // KATAKANA LETTER SMALL WA
    132, 128, 12, TEXT_TY, // KATAKANA LETTER WA
    144, 128, 12, TEXT_TY, // KATAKANA LETTER WO
    156, 128, 12, TEXT_TY, // KATAKANA LETTER N
    168, 128, 12, TEXT_TY, // KATAKANA LETTER VU
    180, 128, 12, TEXT_TY, // KATAKANA LETTER SMALL KA
    192, 128, 12, TEXT_TY, // KATAKANA LETTER SMALL KE
    204, 128, 12, TEXT_TY, // KATAKANA-HIRAGANA PROLONGED SOUND MARK
    216, 128, 12, TEXT_TY, // PRIVATE USE-E000
    228, 128, 12, TEXT_TY, // PRIVATE USE-E001
    240, 128, 12, TEXT_TY, // PRIVATE USE-E002
    252, 128, 12, TEXT_TY, // PRIVATE USE-E003
    264, 128, 12, TEXT_TY, // PRIVATE USE-E004
    276, 128, 12, TEXT_TY, // PRIVATE USE-E005
    288, 128, 12, TEXT_TY, // PRIVATE USE-E006
    300, 128, 12, TEXT_TY, // PRIVATE USE-E007
    312, 128, 12, TEXT_TY, // PRIVATE USE-E008
    324, 128, 12, TEXT_TY, // PRIVATE USE-E009
    336, 128, 12, TEXT_TY, // PRIVATE USE-E00A
    348, 128, 12, TEXT_TY, // PRIVATE USE-E00B
    360, 128, 12, TEXT_TY, // PRIVATE USE-E00C
    372, 128, 12, TEXT_TY, // PRIVATE USE-E00D
    384, 128, 12, TEXT_TY, // PRIVATE USE-E00E
    396, 128, 11, TEXT_TY, // PRIVATE USE-E00F
    408, 128, 12, TEXT_TY, // PRIVATE USE-E010
    420, 128, 12, TEXT_TY, // PRIVATE USE-E011
    432, 128, 12, TEXT_TY, // PRIVATE USE-E012
    444, 128, 11, TEXT_TY, // PRIVATE USE-E013
    456, 128, 12, TEXT_TY, // PRIVATE USE-E015
    468, 128, 12, TEXT_TY, // PRIVATE USE-E016
    480, 128, 12, TEXT_TY, // PRIVATE USE-E017
    492, 128, 12, TEXT_TY, // PRIVATE USE-E018
    0, 144, 12, TEXT_TY, // PRIVATE USE-E019
    12, 144, 12, TEXT_TY, // PRIVATE USE-E01A
    24, 144, 12, TEXT_TY, // PRIVATE USE-E01B
    36, 144, 12, TEXT_TY, // PRIVATE USE-E01C
    48, 144, 11, TEXT_TY, // PRIVATE USE-E028
    60, 144, 12, TEXT_TY, // FULLWIDTH EXCLAMATION MARK
    72, 144, 12, TEXT_TY, // FULLWIDTH SOLIDUS
    84, 144, 12, TEXT_TY, // FULLWIDTH DIGIT ZERO
    96, 144, 12, TEXT_TY, // FULLWIDTH QUESTION MARK
    108, 144, 12, TEXT_TY, // FULLWIDTH REVERSE SOLIDUS
    120, 144, 12, TEXT_TY, // FULLWIDTH VERTICAL LINE
    132, 144, 12, TEXT_TY, // FULLWIDTH TILDE

};

static constexpr unsigned short int top_utf16_lookup_table[] = {
0x20,0x21,0x22,0x23,0x24,0x25,0x26,0x27,0x28,0x29,0x2A,0x2B,0x2C,0x2D,0x2E,0x2F,0x30,0x31,0x32,0x33,0x34,0x35,0x36,0x37,0x38,0x39,0x3A,0x3B,0x3C,0x3D,0x3E,0x3F,0x40,
0x41,0x42,0x43,0x44,0x45,0x46,0x47,0x48,0x49,0x4A,0x4B,0x4C,0x4D,0x4E,0x4F,0x50,0x51,0x52,0x53,0x54,0x55,0x56,0x57,0x58,0x59,0x5A,0x5B,0x5C,0x5D,0x5E,0x5F,0x60,0x61,
0x62,0x63,0x64,0x65,0x66,0x67,0x68,0x69,0x6A,0x6B,0x6C,0x6D,0x6E,0x6F,0x70,0x71,0x72,0x73,0x74,0x75,0x76,0x77,0x78,0x79,0x7A,0x7B,0x7C,0x7D,0x7E,0xA1,0xA2,0xA3,0xA9,
0xAE,0xB0,0xB1,0xB4,0xBF,0xC0,0xC1,0xC2,0xC4,0xC7,0xC8,0xC9,0xCA,0xCB,0xCC,0xCD,0xCE,0xCF,0xD1,0xD2,0xD3,0xD4,0xD6,0xD7,0xD9,0xDA,0xDB,0xDC,0xDF,0xE0,0xE1,0xE2,0xE4,
0xE7,0xE8,0xE9,0xEA,0xEB,0xEC,0xED,0xEE,0xEF,0xF1,0xF2,0xF3,0xF4,0xF6,0xF7,0xF9,0xFA,0xFB,0xFC,0x152,0x153,0x201C,0x201D,0x2022,0x2026,0x2033,0x203B,0x20AC,0x2122,0x2190,0x2191,0x2192,0x2193,
0x221E,0x2234,0x25A0,0x25A1,0x25B2,0x25B3,0x25BC,0x25BD,0x25C6,0x25C7,0x25CB,0x25CE,0x25CF,0x2605,0x2606,0x266A,0x266D,0x3000,0x3001,0x3002,0x300C,0x300D,0x3012,0x3041,0x3042,0x3043,0x3044,0x3045,0x3046,0x3047,0x3048,0x3049,0x304A,
0x304B,0x304C,0x304D,0x304E,0x304F,0x3050,0x3051,0x3052,0x3053,0x3054,0x3055,0x3056,0x3057,0x3058,0x3059,0x305A,0x305B,0x305C,0x305D,0x305E,0x305F,0x3060,0x3061,0x3062,0x3063,0x3064,0x3065,0x3066,0x3067,0x3068,0x3069,0x306A,0x306B,
0x306C,0x306D,0x306E,0x306F,0x3070,0x3071,0x3072,0x3073,0x3074,0x3075,0x3076,0x3077,0x3078,0x3079,0x307A,0x307B,0x307C,0x307D,0x307E,0x307F,0x3080,0x3081,0x3082,0x3083,0x3084,0x3085,0x3086,0x3087,0x3088,0x3089,0x308A,0x308B,0x308C,
0x308D,0x308E,0x308F,0x3092,0x3093,0x30A1,0x30A2,0x30A3,0x30A4,0x30A5,0x30A6,0x30A7,0x30A8,0x30A9,0x30AA,0x30AB,0x30AC,0x30AD,0x30AE,0x30AF,0x30B0,0x30B1,0x30B2,0x30B3,0x30B4,0x30B5,0x30B6,0x30B7,0x30B8,0x30B9,0x30BA,0x30BB,0x30BC,
0x30BD,0x30BE,0x30BF,0x30C0,0x30C1,0x30C2,0x30C3,0x30C4,0x30C5,0x30C6,0x30C7,0x30C8,0x30C9,0x30CA,0x30CB,0x30CC,0x30CD,0x30CE,0x30CF,0x30D0,0x30D1,0x30D2,0x30D3,0x30D4,0x30D5,0x30D6,0x30D7,0x30D8,0x30D9,0x30DA,0x30DB,0x30DC,0x30DD,
0x30DE,0x30DF,0x30E0,0x30E1,0x30E2,0x30E3,0x30E4,0x30E5,0x30E6,0x30E7,0x30E8,0x30E9,0x30EA,0x30EB,0x30EC,0x30ED,0x30EE,0x30EF,0x30F2,0x30F3,0x30F4,0x30F5,0x30F6,0x30FC,0xE000,0xE001,0xE002,0xE003,0xE004,0xE005,0xE006,0xE007,0xE008,
0xE009,0xE00A,0xE00B,0xE00C,0xE00D,0xE00E,0xE00F,0xE010,0xE011,0xE012,0xE012,0xE015,0xE016,0xE017,0xE018,0xE019,0xE01A,0xE01B,0xE01C,0xE028,0xFF01,0xFF0F,0xFF10,0xFF1F,0xFF3C,0xFF5C,0xFF5E,
};


#endif

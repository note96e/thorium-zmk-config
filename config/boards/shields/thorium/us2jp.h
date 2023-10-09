#define JPGRAVE &jpgrave
#define JPN1 &kp N1
#define JPN2 &jpn2
#define JPN3 &kp N3
#define JPN4 &kp N4
#define JPN5 &kp N5
#define JPN6 &jpn6
#define JPN7 &jpn7
#define JPN8 &jpn8
#define JPN9 &jpn9
#define JPN0 &jpn0
#define JPMINUS &jpminus
#define JPEQUAL &jpequal

#define JPQ &kp Q
#define JPW &kp W
#define JPE &kp E
#define JPR &kp R
#define JPT &kp T
#define JPY &kp Y
#define JPU &kp U
#define JPI &kp I
#define JPO &kp O
#define JPP &kp P
#define JPLBKT &kp RBKT
#define JPRBKT &kp NUHS
#define JPBSLH &kp INT3

#define JPA &kp A
#define JPS &kp S
#define JPD &kp D
#define JPF &kp F
#define JPG &kp G
#define JPH &kp H
#define JPJ &kp J
#define JPK &kp K
#define JPL &kp L
#define JPSEMI &jpsemi
#define JPSQT &jpsqt

#define JPZ &kp Z
#define JPX &kp X
#define JPC &kp C
#define JPV &kp V
#define JPB &kp B
#define JPN &kp N
#define JPM &kp M
#define JPCOMMA &kp COMMA
#define JPDOT &kp DOT
#define JPSLASH &kp SLASH

#define JPTILDE &kp LS(EQUAL)
#define JPEXCL &kp LS(N1)
#define JPAT &jpat
#define JPHASH &kp LS(N3)
#define JPDLLR &kp LS(N4)
#define JPPRCNT &kp LS(N5)
#define JPCARET &jpcaret
#define JPAMPS &kp LS(N6)
#define JPASTRK &kp LS(SQT)
#define JPLPAR &kp LS(N8)
#define JPRPAR &kp LS(N9)
#define JPUNDER &kp LS(INT1)
#define JPPLUS &kp LS(SEMI)

#define JPLBRC &kp LS(RBKT)
#define JPRBRC &kp LS(NUHS)
#define JPPIPE &kp LS(INT3)

#define JPCOLON &jpcolon
#define JPDQT &kp LS(N2)

#define JPLT &kp LS(CAMMA)
#define JPGT &kp LS(DOT)
#define JPQMARK &kp LS(BSLH)

#define ZMK_MORPH_STRINGIFY(x) #x
#define ZMK_MORPH_SFT(name,...) \
    name: name { \
        label = ZMK_MORPH_STRINGIFY(ZMM_ ## name); \
        compatible = "zmk,behavior-mod-morph"; \
        #binding-cells = <0>; \
        mods = <(MOD_LSFT|MOD_RSFT)>; \
        __VA_ARGS__ \
    };
#define ZMK_MORPH_SKS(name,...) \
    name: name { \
        label = ZMK_MORPH_STRINGIFY(ZMM_ ## name); \
        compatible = "zmk,behavior-mod-morph"; \
        #binding-cells = <0>; \
        mods = <(MOD_LSFT|MOD_RSFT)>; \
        keep-mods = <(MOD_LSFT|MOD_RSFT)>; \
        __VA_ARGS__ \
    };

/ {
    behaviors {
        ZMK_MORPH_SKS(jpgrave, bindings = <&kp LS(LBKT)>, <&kp EQUAL>;)
        ZMK_MORPH_SFT(jpn2, bindings = <&kp N2>, <&kp LBKT>;)
        ZMK_MORPH_SFT(jpat, bindings = <&kp LBKT>, <&kp LBKT>;)
        ZMK_MORPH_SFT(jpn6, bindings = <&kp N6>, <&kp EQUAL>;)
        ZMK_MORPH_SFT(jpcaret, bindings = <&kp EQUAL>, <&kp EQUAL>;)
        ZMK_MORPH_SKS(jpn7, bindings = <&kp N7>, <&kp N6>;)
        ZMK_MORPH_SKS(jpn8, bindings = <&kp N8>, <&kp SQT>;)
        ZMK_MORPH_SKS(jpn9, bindings = <&kp N9>, <&kp N8>;)
        ZMK_MORPH_SKS(jpn0, bindings = <&kp N0>, <&kp N9>;)
        ZMK_MORPH_SKS(jpminus, bindings = <&kp MINUS>, <&kp INT1>;)
        ZMK_MORPH_SKS(jpequal, bindings = <&kp LS(MINUS)>, <&kp COLON>;)
        ZMK_MORPH_SFT(jpsemi, bindings = <&kp SEMI>, <&kp SQT>;)
        ZMK_MORPH_SKS(jpsqt, bindings = <&kp LS(N7)>, <&kp N2>;)
        ZMK_MORPH_SFT(jpcolon, bindings = <&kp SQT>, <&kp SQT>;)
        ZMK_MORPH_SFT(lscaps, bindings = <&kp LS(CAPS)>, <&kp CAPS>;)
    };
};

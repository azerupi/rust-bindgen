#define FOO 1
#define BAR 4
#define BAZ (FOO + BAR)

#define BARR (1 << 0)
#define BAZZ ((1 << 1) + BAZ)
#define I_RAN_OUT_OF_DUMB_NAMES (BARR | BAZZ)

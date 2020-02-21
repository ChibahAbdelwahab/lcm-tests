#include "xtl_standard.h"
#include "xtl_action.h"

typedef int natset;

extern XTL_TYPE_BOOLEAN cmp_natset ();
extern XTL_TYPE_ACTION print_natset ();

extern natset empty_natset ();
extern natset insert_natset ();
extern natset remove_natset ();
extern natset union_natset ();
extern natset inter_natset ();
extern natset diff_natset ();
extern XTL_TYPE_BOOLEAN isin_natset ();
extern XTL_TYPE_BOOLEAN eq_natset ();
extern XTL_TYPE_BOOLEAN ne_natset ();
extern XTL_TYPE_BOOLEAN lt_natset ();
extern XTL_TYPE_BOOLEAN gt_natset ();
extern XTL_TYPE_BOOLEAN le_natset ();
extern XTL_TYPE_BOOLEAN ge_natset ();
extern natset string_2_natset ();
extern natset raw_2_natset ();


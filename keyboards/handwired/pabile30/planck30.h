#ifndef PLANCK_H
#define PLANCK_H

#include "quantum.h"

#define LAYOUT_planck_mit( \
	k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, \
	k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, \
	k20, k21, k22, k23, k24, k25, k26, k27, k28, k29 \
) \
{ \
	{ k00, k01, k02, k03, k04, k05, k06, k07, k08, k09 }, \
	{ k10, k11, k12, k13, k14, k15, k16, k17, k18, k19 }, \
	{ k20, k21, k22, k23, k24, k25, k26, k27, k28, k29 } \
}

#define LAYOUT_planck_grid( \
	k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, \
	k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, \
	k20, k21, k22, k23, k24, k25, k26, k27, k28, k29 \
) \
{ \
	{ k00, k01, k02, k03, k04, k05, k06, k07, k08, k09 }, \
	{ k10, k11, k12, k13, k14, k15, k16, k17, k18, k19 }, \
	{ k20, k21, k22, k23, k24, k25, k26, k27, k28, k29 } \
}

#define KC_ KC_TRNS

#endif
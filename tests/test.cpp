#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "../thirdparty/ctest.h"
#include "func.h"
#include <string>

CTEST(suite_sitegen, test_start) {
	ASSERT_EQUAL(1,1);
}
CTEST(suite_sitegen, test_variant) {
	int x,variant;
	variant=3;
	x=proverkavar(variant);
	ASSERT_EQUAL(0,x);
}
CTEST(suite_sitegen, test_varianterr) {
	int x,variant;
	variant=6;
	x=proverkavar(variant);
	ASSERT_EQUAL(1,x);
}
CTEST(suite_sitegen, test_file) {
	int x; std::string d;
	d="../img/video.mp4";
	x=iffileexs(d);
	ASSERT_EQUAL(0,x);
}
CTEST(suite_sitegen, test_fileerr) {
	int x;std::string d;
	d=""; 
	x=iffileexs(d);
	ASSERT_EQUAL(35,x);
}

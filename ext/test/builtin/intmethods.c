
#ifdef HAVE_CONFIG_H
#include "../../ext_config.h"
#endif

#include <php.h>
#include "../../php_ext.h"
#include "../../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "kernel/memory.h"
#include "kernel/fcall.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Test_BuiltIn_IntMethods) {

	ZEPHIR_REGISTER_CLASS(Test\\BuiltIn, IntMethods, test, builtin_intmethods, test_builtin_intmethods_method_entry, 0);

	return SUCCESS;

}

PHP_METHOD(Test_BuiltIn_IntMethods, getAbs) {

	zval *num_param = NULL, _0, *_1 = NULL;
	int num, ZEPHIR_LAST_CALL_STATUS;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &num_param);

	num = zephir_get_intval(num_param);


	ZEPHIR_SINIT_VAR(_0);
	ZVAL_LONG(&_0, num);
	ZEPHIR_CALL_FUNCTION(&_1, "abs", NULL, &_0);
	zephir_check_call_status();
	RETURN_CCTOR(_1);

}

PHP_METHOD(Test_BuiltIn_IntMethods, getAbs1) {

	int ZEPHIR_LAST_CALL_STATUS;
	zval _0, *_1 = NULL;

	ZEPHIR_MM_GROW();

	ZEPHIR_SINIT_VAR(_0);
	ZVAL_LONG(&_0, -5);
	ZEPHIR_CALL_FUNCTION(&_1, "abs", NULL, &_0);
	zephir_check_call_status();
	RETURN_CCTOR(_1);

}

PHP_METHOD(Test_BuiltIn_IntMethods, getBinary) {

	zval *num_param = NULL, _0, *_1 = NULL;
	int num, ZEPHIR_LAST_CALL_STATUS;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &num_param);

	num = zephir_get_intval(num_param);


	ZEPHIR_SINIT_VAR(_0);
	ZVAL_LONG(&_0, num);
	ZEPHIR_CALL_FUNCTION(&_1, "decbin", NULL, &_0);
	zephir_check_call_status();
	RETURN_CCTOR(_1);

}

PHP_METHOD(Test_BuiltIn_IntMethods, getHex) {

	zval *num_param = NULL, _0, *_1 = NULL;
	int num, ZEPHIR_LAST_CALL_STATUS;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &num_param);

	num = zephir_get_intval(num_param);


	ZEPHIR_SINIT_VAR(_0);
	ZVAL_LONG(&_0, num);
	ZEPHIR_CALL_FUNCTION(&_1, "dechex", NULL, &_0);
	zephir_check_call_status();
	RETURN_CCTOR(_1);

}

PHP_METHOD(Test_BuiltIn_IntMethods, getOctal) {

	zval *num_param = NULL, _0, *_1 = NULL;
	int num, ZEPHIR_LAST_CALL_STATUS;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &num_param);

	num = zephir_get_intval(num_param);


	ZEPHIR_SINIT_VAR(_0);
	ZVAL_LONG(&_0, num);
	ZEPHIR_CALL_FUNCTION(&_1, "decoct", NULL, &_0);
	zephir_check_call_status();
	RETURN_CCTOR(_1);

}

PHP_METHOD(Test_BuiltIn_IntMethods, getPow) {

	zval *num_param = NULL, *exp_param = NULL, _0, _1, *_2 = NULL;
	int num, exp, ZEPHIR_LAST_CALL_STATUS;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &num_param, &exp_param);

	num = zephir_get_intval(num_param);
	exp = zephir_get_intval(exp_param);


	ZEPHIR_SINIT_VAR(_0);
	ZVAL_LONG(&_0, num);
	ZEPHIR_SINIT_VAR(_1);
	ZVAL_LONG(&_1, exp);
	ZEPHIR_CALL_FUNCTION(&_2, "pow", NULL, &_0, &_1);
	zephir_check_call_status();
	RETURN_CCTOR(_2);

}

PHP_METHOD(Test_BuiltIn_IntMethods, getSqrt) {

	zval *num_param = NULL, _0, *_1 = NULL;
	int num, ZEPHIR_LAST_CALL_STATUS;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &num_param);

	num = zephir_get_intval(num_param);


	ZEPHIR_SINIT_VAR(_0);
	ZVAL_LONG(&_0, num);
	ZEPHIR_CALL_FUNCTION(&_1, "sqrt", NULL, &_0);
	zephir_check_call_status();
	RETURN_CCTOR(_1);

}

PHP_METHOD(Test_BuiltIn_IntMethods, getExp) {

	zval *num_param = NULL, _0, *_1 = NULL;
	int num, ZEPHIR_LAST_CALL_STATUS;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &num_param);

	num = zephir_get_intval(num_param);


	ZEPHIR_SINIT_VAR(_0);
	ZVAL_LONG(&_0, num);
	ZEPHIR_CALL_FUNCTION(&_1, "exp", NULL, &_0);
	zephir_check_call_status();
	RETURN_CCTOR(_1);

}

PHP_METHOD(Test_BuiltIn_IntMethods, getSin) {

	zval *num_param = NULL, _0, *_1 = NULL;
	int num, ZEPHIR_LAST_CALL_STATUS;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &num_param);

	num = zephir_get_intval(num_param);


	ZEPHIR_SINIT_VAR(_0);
	ZVAL_LONG(&_0, num);
	ZEPHIR_CALL_FUNCTION(&_1, "sin", NULL, &_0);
	zephir_check_call_status();
	RETURN_CCTOR(_1);

}

PHP_METHOD(Test_BuiltIn_IntMethods, getCos) {

	zval *num_param = NULL, _0, *_1 = NULL;
	int num, ZEPHIR_LAST_CALL_STATUS;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &num_param);

	num = zephir_get_intval(num_param);


	ZEPHIR_SINIT_VAR(_0);
	ZVAL_LONG(&_0, num);
	ZEPHIR_CALL_FUNCTION(&_1, "cos", NULL, &_0);
	zephir_check_call_status();
	RETURN_CCTOR(_1);

}

PHP_METHOD(Test_BuiltIn_IntMethods, getTan) {

	zval *num_param = NULL, _0, *_1 = NULL;
	int num, ZEPHIR_LAST_CALL_STATUS;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &num_param);

	num = zephir_get_intval(num_param);


	ZEPHIR_SINIT_VAR(_0);
	ZVAL_LONG(&_0, num);
	ZEPHIR_CALL_FUNCTION(&_1, "tan", NULL, &_0);
	zephir_check_call_status();
	RETURN_CCTOR(_1);

}

PHP_METHOD(Test_BuiltIn_IntMethods, getAsin) {

	zval *num_param = NULL, _0, *_1 = NULL;
	int num, ZEPHIR_LAST_CALL_STATUS;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &num_param);

	num = zephir_get_intval(num_param);


	ZEPHIR_SINIT_VAR(_0);
	ZVAL_LONG(&_0, num);
	ZEPHIR_CALL_FUNCTION(&_1, "asin", NULL, &_0);
	zephir_check_call_status();
	RETURN_CCTOR(_1);

}

PHP_METHOD(Test_BuiltIn_IntMethods, getAcos) {

	zval *num_param = NULL, _0, *_1 = NULL;
	int num, ZEPHIR_LAST_CALL_STATUS;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &num_param);

	num = zephir_get_intval(num_param);


	ZEPHIR_SINIT_VAR(_0);
	ZVAL_LONG(&_0, num);
	ZEPHIR_CALL_FUNCTION(&_1, "acos", NULL, &_0);
	zephir_check_call_status();
	RETURN_CCTOR(_1);

}

PHP_METHOD(Test_BuiltIn_IntMethods, getAtan) {

	zval *num_param = NULL, _0, *_1 = NULL;
	int num, ZEPHIR_LAST_CALL_STATUS;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &num_param);

	num = zephir_get_intval(num_param);


	ZEPHIR_SINIT_VAR(_0);
	ZVAL_LONG(&_0, num);
	ZEPHIR_CALL_FUNCTION(&_1, "atan", NULL, &_0);
	zephir_check_call_status();
	RETURN_CCTOR(_1);

}

PHP_METHOD(Test_BuiltIn_IntMethods, getLog) {

	zval *num_param = NULL, *base_param = NULL, _0 = zval_used_for_init, *_1 = NULL, _2;
	int num, base, ZEPHIR_LAST_CALL_STATUS;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 1, &num_param, &base_param);

	num = zephir_get_intval(num_param);
	if (!base_param) {
		base = -1;
	} else {
		base = zephir_get_intval(base_param);
	}


	if ((base == -1)) {
		ZEPHIR_SINIT_VAR(_0);
		ZVAL_LONG(&_0, num);
		ZEPHIR_CALL_FUNCTION(&_1, "log", NULL, &_0);
		zephir_check_call_status();
		RETURN_CCTOR(_1);
	}
	ZEPHIR_SINIT_NVAR(_0);
	ZVAL_LONG(&_0, num);
	ZEPHIR_SINIT_VAR(_2);
	ZVAL_LONG(&_2, base);
	ZEPHIR_CALL_FUNCTION(&_1, "log", NULL, &_0, &_2);
	zephir_check_call_status();
	RETURN_CCTOR(_1);

}


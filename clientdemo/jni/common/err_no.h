#ifndef ERR_NO_H
#define ERR_NO_H


namespace meet_you{


enum{
	STATUS_OK = 0,
	INPUT_FORMAT_ERROR = -1,
	CHECK_TIME_FAIL = -2,
	CREATE_SESSION_FAIL = -10,
	GET_USER_KEY_FAIL = -11,
	DECRYPT_FAIL = -12,
	MISS_TOKEN = -13,
	CHECK_TOKEN_FAIL = -14,
	INVLID_SESSION_ID = -20,
	SESSION_TIMEOUT = -21, 
	NO_SERVICE = -30,
	THIS_SERVICE_EMPTY = -31,
	SERVICE_EVENTLOOP_NULL = -32,
	SERVICE_TOO_BUSY = -33,
	INVALID_SN = -40,
	SN_TIMEOUT = -41,
	INNER_ERROR = -100,
	
	CONNECT_SERVER_FAIL = -600000,
	SEND_FAIL = -600010,
	REQUEST_TIME_OUT = -600020
};

inline const char* getErrStr(int e){
	switch(e){
	case STATUS_OK:
		return "STATUS_OK";
	case INPUT_FORMAT_ERROR:
		return "INPUT_FORMAT_ERROR";
	case GET_USER_KEY_FAIL:
		return "GET_USER_KEY_FAIL";
	case DECRYPT_FAIL:
		return "DECRYPT_FAIL";
	case MISS_TOKEN:
		return "MISS_TOKEN";
	case CHECK_TOKEN_FAIL:
		return "CHECK_TOKEN_FAIL";
	case CREATE_SESSION_FAIL:
		return "CREATE_SESSION_FAIL";
	case INVLID_SESSION_ID:
		return "INVLID_SESSION_ID";
	case NO_SERVICE:
		return "NO_SERVICE";
	case THIS_SERVICE_EMPTY:
		return "THIS_SERVICE_EMPTY";
	case SERVICE_EVENTLOOP_NULL:
		return "SERVICE_EVENTLOOP_NULL";
	case SESSION_TIMEOUT:
		return "SESSION_TIMEOUT";
	case SERVICE_TOO_BUSY:
		return "SERVICE_TOO_BUSY";
	case INVALID_SN:
		return "INVALID_SN";
	case SN_TIMEOUT:
		return "SN_TIMEOUT";
	case INNER_ERROR:
		return "INNER_ERROR";
	case REQUEST_TIME_OUT:
		return "REQUEST_TIME_OUT";
	case SEND_FAIL:
		return "SEND_FAIL";
	case MY_JNI_ERROR:
		return "JNI_ERROR";
	}
	return "";
}

};


#endif

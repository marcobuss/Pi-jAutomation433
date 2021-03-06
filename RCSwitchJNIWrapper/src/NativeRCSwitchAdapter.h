/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class NativeRCSwitchAdapter */

#ifndef _Included_NativeRCSwitchAdapter
#define _Included_NativeRCSwitchAdapter
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     NativeRCSwitchAdapter
 * Method:    sendBinary
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_NativeRCSwitchAdapter_sendBinary
  (JNIEnv *, jobject, jstring);

/*
 * Class:     NativeRCSwitchAdapter
 * Method:    switchOn
 * Signature: (Ljava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_NativeRCSwitchAdapter_switchOn
  (JNIEnv *, jobject, jstring, jstring);

/*
 * Class:     NativeRCSwitchAdapter
 * Method:    switchOff
 * Signature: (Ljava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_NativeRCSwitchAdapter_switchOff
  (JNIEnv *, jobject, jstring, jstring);

/*
 * Class:     NativeRCSwitchAdapter
 * Method:    setPulseLength
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_NativeRCSwitchAdapter_setPulseLength
  (JNIEnv *, jobject, jint);

/*
 * Class:     NativeRCSwitchAdapter
 * Method:    enableTransmitPin
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_NativeRCSwitchAdapter_enableTransmitPin
  (JNIEnv *, jobject, jint);

/*
 * Class:     NativeRCSwitchAdapter
 * Method:    setRepeatTimes
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_NativeRCSwitchAdapter_setRepeatTimes
  (JNIEnv *, jobject, jint);

#ifdef __cplusplus
}
#endif
#endif

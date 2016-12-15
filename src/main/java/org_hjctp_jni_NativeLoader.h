/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_hjctp_jni_NativeLoader */

#ifndef _Included_org_hjctp_jni_NativeLoader
#define _Included_org_hjctp_jni_NativeLoader
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_hjctp_jni_NativeLoader
 * Method:    createMdApi
 * Signature: (Ljava/lang/String;ZZ)V
 */
JNIEXPORT void JNICALL Java_org_hjctp_jni_NativeLoader_createMdApi
  (JNIEnv *, jclass, jstring, jboolean, jboolean);

/*
 * Class:     org_hjctp_jni_NativeLoader
 * Method:    registerSpi
 * Signature: (Lorg/hjctp/spi/MdSpi;)V
 */
JNIEXPORT void JNICALL Java_org_hjctp_jni_NativeLoader_registerSpi
  (JNIEnv *, jclass, jobject);

/*
 * Class:     org_hjctp_jni_NativeLoader
 * Method:    registerFront
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_hjctp_jni_NativeLoader_registerFront
  (JNIEnv *, jclass, jstring);

/*
 * Class:     org_hjctp_jni_NativeLoader
 * Method:    registerLoginInfo
 * Signature: (Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_hjctp_jni_NativeLoader_registerLoginInfo
  (JNIEnv *, jclass, jstring, jstring, jstring);

/*
 * Class:     org_hjctp_jni_NativeLoader
 * Method:    registerSubMarketData
 * Signature: ([Ljava/lang/String;I)V
 */
JNIEXPORT void JNICALL Java_org_hjctp_jni_NativeLoader_registerSubMarketData
  (JNIEnv *, jclass, jobjectArray, jint);

/*
 * Class:     org_hjctp_jni_NativeLoader
 * Method:    connect
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_hjctp_jni_NativeLoader_connect
  (JNIEnv *, jclass);

/*
 * Class:     org_hjctp_jni_NativeLoader
 * Method:    stop
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_hjctp_jni_NativeLoader_stop
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif

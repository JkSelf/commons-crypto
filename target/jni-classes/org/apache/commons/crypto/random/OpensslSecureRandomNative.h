/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_apache_commons_crypto_random_OpensslSecureRandomNative */

#ifndef _Included_org_apache_commons_crypto_random_OpensslSecureRandomNative
#define _Included_org_apache_commons_crypto_random_OpensslSecureRandomNative
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_apache_commons_crypto_random_OpensslSecureRandomNative
 * Method:    initSR
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_apache_commons_crypto_random_OpensslSecureRandomNative_initSR
  (JNIEnv *, jclass);

/*
 * Class:     org_apache_commons_crypto_random_OpensslSecureRandomNative
 * Method:    nextRandBytes
 * Signature: ([B)Z
 */
JNIEXPORT jboolean JNICALL Java_org_apache_commons_crypto_random_OpensslSecureRandomNative_nextRandBytes
  (JNIEnv *, jclass, jbyteArray);

#ifdef __cplusplus
}
#endif
#endif

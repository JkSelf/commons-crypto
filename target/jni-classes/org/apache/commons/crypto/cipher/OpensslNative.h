/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_apache_commons_crypto_cipher_OpensslNative */

#ifndef _Included_org_apache_commons_crypto_cipher_OpensslNative
#define _Included_org_apache_commons_crypto_cipher_OpensslNative
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_apache_commons_crypto_cipher_OpensslNative
 * Method:    initIDs
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_apache_commons_crypto_cipher_OpensslNative_initIDs
  (JNIEnv *, jclass);

/*
 * Class:     org_apache_commons_crypto_cipher_OpensslNative
 * Method:    initContext
 * Signature: (II)J
 */
JNIEXPORT jlong JNICALL Java_org_apache_commons_crypto_cipher_OpensslNative_initContext
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     org_apache_commons_crypto_cipher_OpensslNative
 * Method:    init
 * Signature: (JIII[B[B)J
 */
JNIEXPORT jlong JNICALL Java_org_apache_commons_crypto_cipher_OpensslNative_init
  (JNIEnv *, jclass, jlong, jint, jint, jint, jbyteArray, jbyteArray);

/*
 * Class:     org_apache_commons_crypto_cipher_OpensslNative
 * Method:    update
 * Signature: (JLjava/nio/ByteBuffer;IILjava/nio/ByteBuffer;II)I
 */
JNIEXPORT jint JNICALL Java_org_apache_commons_crypto_cipher_OpensslNative_update
  (JNIEnv *, jclass, jlong, jobject, jint, jint, jobject, jint, jint);

/*
 * Class:     org_apache_commons_crypto_cipher_OpensslNative
 * Method:    updateByteArray
 * Signature: (J[BII[BII)I
 */
JNIEXPORT jint JNICALL Java_org_apache_commons_crypto_cipher_OpensslNative_updateByteArray
  (JNIEnv *, jclass, jlong, jbyteArray, jint, jint, jbyteArray, jint, jint);

/*
 * Class:     org_apache_commons_crypto_cipher_OpensslNative
 * Method:    doFinal
 * Signature: (JLjava/nio/ByteBuffer;II)I
 */
JNIEXPORT jint JNICALL Java_org_apache_commons_crypto_cipher_OpensslNative_doFinal
  (JNIEnv *, jclass, jlong, jobject, jint, jint);

/*
 * Class:     org_apache_commons_crypto_cipher_OpensslNative
 * Method:    doFinalByteArray
 * Signature: (J[BII)I
 */
JNIEXPORT jint JNICALL Java_org_apache_commons_crypto_cipher_OpensslNative_doFinalByteArray
  (JNIEnv *, jclass, jlong, jbyteArray, jint, jint);

/*
 * Class:     org_apache_commons_crypto_cipher_OpensslNative
 * Method:    clean
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_apache_commons_crypto_cipher_OpensslNative_clean
  (JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif

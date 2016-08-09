/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class pHash */

#ifndef _Included_pHash
#define _Included_pHash
#ifdef __cplusplus
extern "C" {
#endif

#ifdef HAVE_VIDEO_HASH
/*
 * Class:     pHash
 * Method:    videoHash
 * Signature: (Ljava/lang/String;)LVideoHash;
 */
JNIEXPORT jobject JNICALL Java_org_pHash_pHash_videoHash
  (JNIEnv *, jclass, jstring);
#endif

#ifdef HAVE_AUDIO_HASH
/*
 * Class:     pHash
 * Method:    audioHash
 * Signature: (Ljava/lang/String;)LAudioHash;
 */
JNIEXPORT jobject JNICALL Java_org_pHash_pHash_audioHash
  (JNIEnv *, jclass, jstring);
#endif
/*
 * Class:     pHash
 * Method:    dctImageHash
 * Signature: (Ljava/lang/String;)LDCTImageHash;
 */
JNIEXPORT jobject JNICALL Java_org_pHash_pHash_dctImageHash
  (JNIEnv *, jclass, jstring);

/*
 * Class:     pHash
 * Method:    mhImageHash
 * Signature: (Ljava/lang/String;)LMHImageHash;
 */
JNIEXPORT jobject JNICALL Java_org_pHash_pHash_mhImageHash
  (JNIEnv *, jclass, jstring);

/*
 * Class:     pHash
 * Method:    textHash
 * Signature: (Ljava/lang/String;)LTextHash;
 */
JNIEXPORT jobject JNICALL Java_org_pHash_pHash_textHash
  (JNIEnv *, jclass, jstring);

/*
 * Class:     pHash
 * Method:    imageDistance
 * Signature: (LImageHash;LImageHash;)D
 */
JNIEXPORT jdouble JNICALL Java_org_pHash_pHash_imageDistance
  (JNIEnv *, jclass, jobject, jobject);

#ifdef HAVE_AUDIO_HASH
/*
 * Class:     pHash
 * Method:    audioDistance
 * Signature: (LAudioHash;LAudioHash;)D
 */
JNIEXPORT jdouble JNICALL Java_org_pHash_pHash_audioDistance
  (JNIEnv *, jclass, jobject, jobject);
#endif
  
#ifdef HAVE_VIDEO_HASH  
/*
 * Class:     pHash
 * Method:    videoDistance
 * Signature: (LVideoHash;LVideoHash;I)D
 */
JNIEXPORT jdouble JNICALL Java_org_pHash_pHash_videoDistance
  (JNIEnv *, jclass, jobject, jobject, jint);
#endif
/*
 * Class:     pHash
 * Method:    textDistance
 * Signature: (LTextHash;LTextHash;)I
 */
JNIEXPORT jint JNICALL Java_org_pHash_pHash_textDistance
  (JNIEnv *, jclass, jobject, jobject);

/*
 * Class:     pHash
 * Method:    pHashInit
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_pHash_pHash_pHashInit
  (JNIEnv *, jclass);

/*
 * Class:     pHash
 * Method:    cleanup
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_pHash_pHash_cleanup
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif

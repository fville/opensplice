
 /* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_opensplice_dds_dcps_TopicImpl */

#ifndef _Included_org_opensplice_dds_dcps_TopicImpl
#define _Included_org_opensplice_dds_dcps_TopicImpl
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_opensplice_dds_dcps_TopicImpl
 * Method:    jniGetInconsistentTopicStatus
 * Signature: (LDDS/InconsistentTopicStatusHolder;)I
 */
JNIEXPORT jint JNICALL Java_org_opensplice_dds_dcps_TopicImpl_jniGetInconsistentTopicStatus
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_opensplice_dds_dcps_TopicImpl
 * Method:    jniGetAllDataDisposedTopicStatus
 * Signature: (LDDS/AllDataDisposedTopicStatusHolder;)I
 */
JNIEXPORT jint JNICALL Java_org_opensplice_dds_dcps_TopicImpl_jniGetAllDataDisposedTopicStatus
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_opensplice_dds_dcps_TopicImpl
 * Method:    jniGetQos
 * Signature: (LDDS/TopicQosHolder;)I
 */
JNIEXPORT jint JNICALL Java_org_opensplice_dds_dcps_TopicImpl_jniGetQos
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_opensplice_dds_dcps_TopicImpl
 * Method:    jniSetQos
 * Signature: (LDDS/TopicQos;)I
 */
JNIEXPORT jint JNICALL Java_org_opensplice_dds_dcps_TopicImpl_jniSetQos
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_opensplice_dds_dcps_TopicImpl
 * Method:    jniGetListener
 * Signature: ()LDDS/TopicListener;
 */
JNIEXPORT jobject JNICALL Java_org_opensplice_dds_dcps_TopicImpl_jniGetListener
  (JNIEnv *, jobject);

/*
 * Class:     org_opensplice_dds_dcps_TopicImpl
 * Method:    jniSetListener
 * Signature: (LDDS/TopicListener;I)I
 */
JNIEXPORT jint JNICALL Java_org_opensplice_dds_dcps_TopicImpl_jniSetListener
  (JNIEnv *, jobject, jobject, jint);

/*
 * Class:     org_opensplice_dds_dcps_TopicImpl
 * Method:    jniGetTypeName
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_opensplice_dds_dcps_TopicImpl_jniGetTypeName
  (JNIEnv *, jobject);

/*
 * Class:     org_opensplice_dds_dcps_TopicImpl
 * Method:    jniGetName
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_opensplice_dds_dcps_TopicImpl_jniGetName
  (JNIEnv *, jobject);

/*
 * Class:     org_opensplice_dds_dcps_TopicImpl
 * Method:    jniGetParticipant
 * Signature: ()LDDS/DomainParticipant;
 */
JNIEXPORT jobject JNICALL Java_org_opensplice_dds_dcps_TopicImpl_jniGetParticipant
  (JNIEnv *, jobject);

/*
 * Class:     org_opensplice_dds_dcps_TopicImpl
 * Method:    jniDisposeAllData
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_opensplice_dds_dcps_TopicImpl_jniDisposeAllData
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif

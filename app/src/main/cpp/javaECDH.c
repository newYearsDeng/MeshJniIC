#include <jni.h>
#include "com_northmeter_meshble_jnjutils_JniUtils.h"


JNIEXPORT jstring Java_com_northmeter_meshble_jnjutils_JniUtils_getString
  (JNIEnv *env, jobject obj)
  {
     return (*env)->NewStringUTF(env, "这是我测试的jni");
  }

JNIEXPORT jint JNICALL Java_com_northmeter_meshble_jnjutils_JniUtils_add
        (JNIEnv *env, jclass jc, jint a, jint b)
{
    return a+b;
}


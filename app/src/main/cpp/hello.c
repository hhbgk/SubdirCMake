#include <jni.h>
#include <stdlib.h>
#include <stdio.h>
#include "sub/subdir.h"

jstring Java_com_hhbgk_subdircmake_MainActivity_stringFromJNI(JNIEnv *env, jobject this,
jint a, jint b) {
    char str[32];

    int result = addition(a, b);

    sprintf(str, "%d + %d =%d", a,b,result);
    return (*env)->NewStringUTF(env, str);
}


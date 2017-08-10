//
// Created by 刘华健 on 2017/8/10.
//

#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring JNICALL
Java_com_lhj_messi_jnitest2_Student_getInfoFromNDK(
JNIEnv* env,
jobject /* this */) {
std::string hello = "Fuck You MChao";
return env->NewStringUTF(hello.c_str());
}



#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring JNICALL
Java_com_lhj_messi_jnitest2_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Fuck You Kotlin";
    return env->NewStringUTF(hello.c_str());
}

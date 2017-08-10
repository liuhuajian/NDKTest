package com.lhj.messi.jnitest2;

/**
 * Created by messi on 2017/8/10.
 */

public class Student {
    static {
        System.loadLibrary("native-lib");
    }

    public native String getInfoFromNDK();
}

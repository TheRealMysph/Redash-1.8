## ReDash 1.8's GitHub Repository

To compile this, please check out [this guide](https://github.com/iAndyHD3/gd-mod-example-android/tree/main) from iAndy. :)

But this is 1.8 and will be a bit different, on `.method static constructor <clinit>()V
    .locals 1 ...`, you will add these instead after the cocos2dcpp line: 
    
    .line 67
    const-string v0, "dobby"

    invoke-static {v0}, Ljava/lang/System;->loadLibrary(Ljava/lang/String;)V
    
    .line 67
    const-string v0, "hooking"

    invoke-static {v0}, Ljava/lang/System;->loadLibrary(Ljava/lang/String;)V

    .line 67
    const-string v0, "game"

    invoke-static {v0}, Ljava/lang/System;->loadLibrary(Ljava/lang/String;)V

I personally like to build the mod by running `C:\(The path for the folder)\android-ndk-r16b\ndk-build.cmd` directly on the project's folder, but you can also edit the `build.bat` :)

Please check out `/Libaries/README.md`, there's useful info there, required to build the mod.

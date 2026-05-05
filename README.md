<p align="center">
  <img src="https://github.com/user-attachments/assets/097a6886-3c7a-497e-a8a3-52790b5c3d6d" width="275" alt="ReDash 1.8">
</p>

## ReDash 1.8's Repository

To compile this, please check out [this guide](https://github.com/iAndyHD3/gd-mod-example-android/tree/main) from iAndy. Wiki is currently on work :)

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

Please check out `/Libraries/README.md`, there's useful info there, required to build the mod.

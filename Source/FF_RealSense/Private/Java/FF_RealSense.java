package com.Plugins.FF_RealSense;

import android.app.Activity;
import androidx.annotation.Keep;
import android.os.Build;
import android.provider.Settings;
import android.content.Context;
import android.content.res.Resources;
import android.content.res.Configuration;

// FF Reality - Realsense
import com.intel.realsense.librealsense.RsContext;
//import com.intel.realsense.librealsense.Colorizer;
//import com.intel.realsense.librealsense.Config;
//import com.intel.realsense.librealsense.DeviceList;
//import com.intel.realsense.librealsense.DeviceListener;
//import com.intel.realsense.librealsense.FrameSet;
//import com.intel.realsense.librealsense.GLRsSurfaceView;
//import com.intel.realsense.librealsense.Pipeline;
//import com.intel.realsense.librealsense.PipelineProfile;
//import com.intel.realsense.librealsense.StreamType;

@Keep
public class FF_RealSense {
	
@Keep
	public static void RealSenseInit(final Activity activity)
	{
		Context context = activity;
		RsContext rsContext = new RsContext();
		rsContext.init(context);
	}
}
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

@Keep
public class FF_RealSense
{
	static RsContext rsContext;
	
	//@Keep
	public static boolean RealSense_Init(final Activity activity)
	{
		Context context = activity;
		rsContext = new RsContext();
		rsContext.init(context);

		return true;
	}
	
	//@Keep
	public static boolean RealSense_Destruct(String[] args)
	{
		rsContext.close();
		rsContext = null;

		return true;
	}
}
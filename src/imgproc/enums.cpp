/* Gimp OpenCV Plugin
 *
 * Copyright (c) 2013 see AUTHORS file.
 *
 * Gimp OpenCV Plugin is free software: you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as published
 * by the Free Software Foundation, either version 3 of the License, or (at
 * your option) any later version.
 *
 * Gimp OpenCV Plugin is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General
 * Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with Gimp OpenCV Plugin. If not, see <http://www.gnu.org/licenses/>.
 */
#include "enums.hpp"

#include <opencv2/imgproc/imgproc.hpp>

GType BorderEnum_get_type()
{
    static GType type = 0;
    if (type == 0)
    {
            static GEnumValue const values[] =
                {{cv::BORDER_REPLICATE, "BORDER_REPLICATE", "BORDER_REPLICATE"},
                 {cv::BORDER_CONSTANT, "BORDER_CONSTANT", "BORDER_CONSTANT"},
                 {cv::BORDER_REFLECT, "BORDER_REFLECT", "BORDER_REFLECT"},
                 {cv::BORDER_WRAP, "BORDER_WRAP", "BORDER_WRAP"},
                 {cv::BORDER_REFLECT_101, "BORDER_REFLECT_101", "BORDER_REFLECT_101"},
                 {cv::BORDER_REFLECT101, "BORDER_REFLECT101", "BORDER_REFLECT101"},
                 {cv::BORDER_TRANSPARENT, "BORDER_TRANSPARENT", "BORDER_TRANSPARENT"},
                 {cv::BORDER_DEFAULT, "BORDER_DEFAULT", "BORDER_DEFAULT"},
                 {cv::BORDER_ISOLATED, "BORDER_ISOLATED", "BORDER_ISOLATED"},
                 {0, NULL, NULL}};

		type = g_enum_register_static("BorderEnum", values);
    }

	return type;
}

GType CvtColorEnum_get_type()
{
    static GType type = 0;
    if (type == 0)
    {
        static GEnumValue const values[] =
            {{cv::COLOR_BGR2BGRA, "COLOR_BGR2BGRA", "BGR2BGRA"},
             {cv::COLOR_RGB2RGBA, "COLOR_RGB2RGBA", "RGB2RGBA"},
             {cv::COLOR_BGRA2BGR, "COLOR_BGRA2BGR", "BGRA2BGR"},
             {cv::COLOR_RGBA2RGB, "COLOR_RGBA2RGB", "RGBA2RGB"},
             {cv::COLOR_BGR2RGBA, "COLOR_BGR2RGBA", "BGR2RGBA"},
             {cv::COLOR_RGB2BGRA, "COLOR_RGB2BGRA", "RGB2BGRA"},
             {cv::COLOR_RGBA2BGR, "COLOR_RGBA2BGR", "RGBA2BGR"},
             {cv::COLOR_BGRA2RGB, "COLOR_BGRA2RGB", "BGRA2RGB"},
             {cv::COLOR_BGR2RGB, "COLOR_BGR2RGB", "BGR2RGB"},
             {cv::COLOR_RGB2BGR, "COLOR_RGB2BGR", "RGB2BGR"},
             {cv::COLOR_BGRA2RGBA, "COLOR_BGRA2RGBA", "BGRA2RGBA"},
             {cv::COLOR_RGBA2BGRA, "COLOR_RGBA2BGRA", "RGBA2BGRA"},
             {cv::COLOR_BGR2GRAY, "COLOR_BGR2GRAY", "BGR2GRAY"},
             {cv::COLOR_RGB2GRAY, "COLOR_RGB2GRAY", "RGB2GRAY"},
             {cv::COLOR_GRAY2BGR, "COLOR_GRAY2BGR", "GRAY2BGR"},
             {cv::COLOR_GRAY2RGB, "COLOR_GRAY2RGB", "GRAY2RGB"},
             {cv::COLOR_GRAY2BGRA, "COLOR_GRAY2BGRA", "GRAY2BGRA"},
             {cv::COLOR_GRAY2RGBA, "COLOR_GRAY2RGBA", "GRAY2RGBA"},
             {cv::COLOR_BGRA2GRAY, "COLOR_BGRA2GRAY", "BGRA2GRAY"},
             {cv::COLOR_RGBA2GRAY, "COLOR_RGBA2GRAY", "RGBA2GRAY"},
             {cv::COLOR_BGR2BGR565, "COLOR_BGR2BGR565", "BGR2BGR565"},
             {cv::COLOR_RGB2BGR565, "COLOR_RGB2BGR565", "RGB2BGR565"},
             {cv::COLOR_BGR5652BGR, "COLOR_BGR5652BGR", "BGR5652BGR"},
             {cv::COLOR_BGR5652RGB, "COLOR_BGR5652RGB", "BGR5652RGB"},
             {cv::COLOR_BGRA2BGR565, "COLOR_BGRA2BGR565", "BGRA2BGR565"},
             {cv::COLOR_RGBA2BGR565, "COLOR_RGBA2BGR565", "RGBA2BGR565"},
             {cv::COLOR_BGR5652BGRA, "COLOR_BGR5652BGRA", "BGR5652BGRA"},
             {cv::COLOR_BGR5652RGBA, "COLOR_BGR5652RGBA", "BGR5652RGBA"},
             {cv::COLOR_GRAY2BGR565, "COLOR_GRAY2BGR565", "GRAY2BGR565"},
             {cv::COLOR_BGR5652GRAY, "COLOR_BGR5652GRAY", "BGR5652GRAY"},
             {cv::COLOR_BGR2BGR555, "COLOR_BGR2BGR555", "BGR2BGR555"},
             {cv::COLOR_RGB2BGR555, "COLOR_RGB2BGR555", "RGB2BGR555"},
             {cv::COLOR_BGR5552BGR, "COLOR_BGR5552BGR", "BGR5552BGR"},
             {cv::COLOR_BGR5552RGB, "COLOR_BGR5552RGB", "BGR5552RGB"},
             {cv::COLOR_BGRA2BGR555, "COLOR_BGRA2BGR555", "BGRA2BGR555"},
             {cv::COLOR_RGBA2BGR555, "COLOR_RGBA2BGR555", "RGBA2BGR555"},
             {cv::COLOR_BGR5552BGRA, "COLOR_BGR5552BGRA", "BGR5552BGRA"},
             {cv::COLOR_BGR5552RGBA, "COLOR_BGR5552RGBA", "BGR5552RGBA"},
             {cv::COLOR_GRAY2BGR555, "COLOR_GRAY2BGR555", "GRAY2BGR555"},
             {cv::COLOR_BGR5552GRAY, "COLOR_BGR5552GRAY", "BGR5552GRAY"},
             {cv::COLOR_BGR2XYZ, "COLOR_BGR2XYZ", "BGR2XYZ"},
             {cv::COLOR_RGB2XYZ, "COLOR_RGB2XYZ", "RGB2XYZ"},
             {cv::COLOR_XYZ2BGR, "COLOR_XYZ2BGR", "XYZ2BGR"},
             {cv::COLOR_XYZ2RGB, "COLOR_XYZ2RGB", "XYZ2RGB"},
             {cv::COLOR_BGR2YCrCb, "COLOR_BGR2YCrCb", "BGR2YCrCb"},
             {cv::COLOR_RGB2YCrCb, "COLOR_RGB2YCrCb", "RGB2YCrCb"},
             {cv::COLOR_YCrCb2BGR, "COLOR_YCrCb2BGR", "YCrCb2BGR"},
             {cv::COLOR_YCrCb2RGB, "COLOR_YCrCb2RGB", "YCrCb2RGB"},
             {cv::COLOR_BGR2HSV, "COLOR_BGR2HSV", "BGR2HSV"},
             {cv::COLOR_RGB2HSV, "COLOR_RGB2HSV", "RGB2HSV"},
             {cv::COLOR_BGR2Lab, "COLOR_BGR2Lab", "BGR2Lab"},
             {cv::COLOR_RGB2Lab, "COLOR_RGB2Lab", "RGB2Lab"},
             {cv::COLOR_BayerBG2BGR, "COLOR_BayerBG2BGR", "BayerBG2BGR"},
             {cv::COLOR_BayerGB2BGR, "COLOR_BayerGB2BGR", "BayerGB2BGR"},
             {cv::COLOR_BayerRG2BGR, "COLOR_BayerRG2BGR", "BayerRG2BGR"},
             {cv::COLOR_BayerGR2BGR, "COLOR_BayerGR2BGR", "BayerGR2BGR"},
             {cv::COLOR_BayerBG2RGB, "COLOR_BayerBG2RGB", "BayerBG2RGB"},
             {cv::COLOR_BayerGB2RGB, "COLOR_BayerGB2RGB", "BayerGB2RGB"},
             {cv::COLOR_BayerRG2RGB, "COLOR_BayerRG2RGB", "BayerRG2RGB"},
             {cv::COLOR_BayerGR2RGB, "COLOR_BayerGR2RGB", "BayerGR2RGB"},
             {cv::COLOR_BGR2Luv, "COLOR_BGR2Luv", "BGR2Luv"},
             {cv::COLOR_RGB2Luv, "COLOR_RGB2Luv", "RGB2Luv"},
             {cv::COLOR_BGR2HLS, "COLOR_BGR2HLS", "BGR2HLS"},
             {cv::COLOR_RGB2HLS, "COLOR_RGB2HLS", "RGB2HLS"},
             {cv::COLOR_HSV2BGR, "COLOR_HSV2BGR", "HSV2BGR"},
             {cv::COLOR_HSV2RGB, "COLOR_HSV2RGB", "HSV2RGB"},
             {cv::COLOR_Lab2BGR, "COLOR_Lab2BGR", "Lab2BGR"},
             {cv::COLOR_Lab2RGB, "COLOR_Lab2RGB", "Lab2RGB"},
             {cv::COLOR_Luv2BGR, "COLOR_Luv2BGR", "Luv2BGR"},
             {cv::COLOR_Luv2RGB, "COLOR_Luv2RGB", "Luv2RGB"},
             {cv::COLOR_HLS2BGR, "COLOR_HLS2BGR", "HLS2BGR"},
             {cv::COLOR_HLS2RGB, "COLOR_HLS2RGB", "HLS2RGB"},
             {cv::COLOR_BayerBG2BGR_VNG, "COLOR_BayerBG2BGR_VNG", "BayerBG2BGR_VNG"},
             {cv::COLOR_BayerGB2BGR_VNG, "COLOR_BayerGB2BGR_VNG", "BayerGB2BGR_VNG"},
             {cv::COLOR_BayerRG2BGR_VNG, "COLOR_BayerRG2BGR_VNG", "BayerRG2BGR_VNG"},
             {cv::COLOR_BayerGR2BGR_VNG, "COLOR_BayerGR2BGR_VNG", "BayerGR2BGR_VNG"},
             {cv::COLOR_BayerBG2RGB_VNG, "COLOR_BayerBG2RGB_VNG", "BayerBG2RGB_VNG"},
             {cv::COLOR_BayerGB2RGB_VNG, "COLOR_BayerGB2RGB_VNG", "BayerGB2RGB_VNG"},
             {cv::COLOR_BayerRG2RGB_VNG, "COLOR_BayerRG2RGB_VNG", "BayerRG2RGB_VNG"},
             {cv::COLOR_BayerGR2RGB_VNG, "COLOR_BayerGR2RGB_VNG", "BayerGR2RGB_VNG"},
             {cv::COLOR_BGR2HSV_FULL, "COLOR_BGR2HSV_FULL", "BGR2HSV_FULL"},
             {cv::COLOR_RGB2HSV_FULL, "COLOR_RGB2HSV_FULL", "RGB2HSV_FULL"},
             {cv::COLOR_BGR2HLS_FULL, "COLOR_BGR2HLS_FULL", "BGR2HLS_FULL"},
             {cv::COLOR_RGB2HLS_FULL, "COLOR_RGB2HLS_FULL", "RGB2HLS_FULL"},
             {cv::COLOR_HSV2BGR_FULL, "COLOR_HSV2BGR_FULL", "HSV2BGR_FULL"},
             {cv::COLOR_HSV2RGB_FULL, "COLOR_HSV2RGB_FULL", "HSV2RGB_FULL"},
             {cv::COLOR_HLS2BGR_FULL, "COLOR_HLS2BGR_FULL", "HLS2BGR_FULL"},
             {cv::COLOR_HLS2RGB_FULL, "COLOR_HLS2RGB_FULL", "HLS2RGB_FULL"},
             {cv::COLOR_LBGR2Lab, "COLOR_LBGR2Lab", "LBGR2Lab"},
             {cv::COLOR_LRGB2Lab, "COLOR_LRGB2Lab", "LRGB2Lab"},
             {cv::COLOR_LBGR2Luv, "COLOR_LBGR2Luv", "LBGR2Luv"},
             {cv::COLOR_LRGB2Luv, "COLOR_LRGB2Luv", "LRGB2Luv"},
             {cv::COLOR_Lab2LBGR, "COLOR_Lab2LBGR", "Lab2LBGR"},
             {cv::COLOR_Lab2LRGB, "COLOR_Lab2LRGB", "Lab2LRGB"},
             {cv::COLOR_Luv2LBGR, "COLOR_Luv2LBGR", "Luv2LBGR"},
             {cv::COLOR_Luv2LRGB, "COLOR_Luv2LRGB", "Luv2LRGB"},
             {cv::COLOR_BGR2YUV, "COLOR_BGR2YUV", "BGR2YUV"},
             {cv::COLOR_RGB2YUV, "COLOR_RGB2YUV", "RGB2YUV"},
             {cv::COLOR_YUV2BGR, "COLOR_YUV2BGR", "YUV2BGR"},
             {cv::COLOR_YUV2RGB, "COLOR_YUV2RGB", "YUV2RGB"},
             {cv::COLOR_BayerBG2GRAY, "COLOR_BayerBG2GRAY", "BayerBG2GRAY"},
             {cv::COLOR_BayerGB2GRAY, "COLOR_BayerGB2GRAY", "BayerGB2GRAY"},
             {cv::COLOR_BayerRG2GRAY, "COLOR_BayerRG2GRAY", "BayerRG2GRAY"},
             {cv::COLOR_BayerGR2GRAY, "COLOR_BayerGR2GRAY", "BayerGR2GRAY"},
             {cv::COLOR_YUV2RGB_NV12, "COLOR_YUV2RGB_NV12", "YUV2RGB_NV12"},
             {cv::COLOR_YUV2BGR_NV12, "COLOR_YUV2BGR_NV12", "YUV2BGR_NV12"},
             {cv::COLOR_YUV2RGB_NV21, "COLOR_YUV2RGB_NV21", "YUV2RGB_NV21"},
             {cv::COLOR_YUV2BGR_NV21, "COLOR_YUV2BGR_NV21", "YUV2BGR_NV21"},
             {cv::COLOR_YUV420sp2RGB, "COLOR_YUV420sp2RGB", "YUV420sp2RGB"},
             {cv::COLOR_YUV420sp2BGR, "COLOR_YUV420sp2BGR", "YUV420sp2BGR"},
             {cv::COLOR_YUV2RGBA_NV12, "COLOR_YUV2RGBA_NV12", "YUV2RGBA_NV12"},
             {cv::COLOR_YUV2BGRA_NV12, "COLOR_YUV2BGRA_NV12", "YUV2BGRA_NV12"},
             {cv::COLOR_YUV2RGBA_NV21, "COLOR_YUV2RGBA_NV21", "YUV2RGBA_NV21"},
             {cv::COLOR_YUV2BGRA_NV21, "COLOR_YUV2BGRA_NV21", "YUV2BGRA_NV21"},
             {cv::COLOR_YUV420sp2RGBA, "COLOR_YUV420sp2RGBA", "YUV420sp2RGBA"},
             {cv::COLOR_YUV420sp2BGRA, "COLOR_YUV420sp2BGRA", "YUV420sp2BGRA"},
             {cv::COLOR_YUV2RGB_YV12, "COLOR_YUV2RGB_YV12", "YUV2RGB_YV12"},
             {cv::COLOR_YUV2BGR_YV12, "COLOR_YUV2BGR_YV12", "YUV2BGR_YV12"},
             {cv::COLOR_YUV2RGB_IYUV, "COLOR_YUV2RGB_IYUV", "YUV2RGB_IYUV"},
             {cv::COLOR_YUV2BGR_IYUV, "COLOR_YUV2BGR_IYUV", "YUV2BGR_IYUV"},
             {cv::COLOR_YUV2RGB_I420, "COLOR_YUV2RGB_I420", "YUV2RGB_I420"},
             {cv::COLOR_YUV2BGR_I420, "COLOR_YUV2BGR_I420", "YUV2BGR_I420"},
             {cv::COLOR_YUV420p2RGB, "COLOR_YUV420p2RGB", "YUV420p2RGB"},
             {cv::COLOR_YUV420p2BGR, "COLOR_YUV420p2BGR", "YUV420p2BGR"},
             {cv::COLOR_YUV2RGBA_YV12, "COLOR_YUV2RGBA_YV12", "YUV2RGBA_YV12"},
             {cv::COLOR_YUV2BGRA_YV12, "COLOR_YUV2BGRA_YV12", "YUV2BGRA_YV12"},
             {cv::COLOR_YUV2RGBA_IYUV, "COLOR_YUV2RGBA_IYUV", "YUV2RGBA_IYUV"},
             {cv::COLOR_YUV2BGRA_IYUV, "COLOR_YUV2BGRA_IYUV", "YUV2BGRA_IYUV"},
             {cv::COLOR_YUV2RGBA_I420, "COLOR_YUV2RGBA_I420", "YUV2RGBA_I420"},
             {cv::COLOR_YUV2BGRA_I420, "COLOR_YUV2BGRA_I420", "YUV2BGRA_I420"},
             {cv::COLOR_YUV420p2RGBA, "COLOR_YUV420p2RGBA", "YUV420p2RGBA"},
             {cv::COLOR_YUV420p2BGRA, "COLOR_YUV420p2BGRA", "YUV420p2BGRA"},
             {cv::COLOR_YUV2GRAY_420, "COLOR_YUV2GRAY_420", "YUV2GRAY_420"},
             {cv::COLOR_YUV2GRAY_NV21, "COLOR_YUV2GRAY_NV21", "YUV2GRAY_NV21"},
             {cv::COLOR_YUV2GRAY_NV12, "COLOR_YUV2GRAY_NV12", "YUV2GRAY_NV12"},
             {cv::COLOR_YUV2GRAY_YV12, "COLOR_YUV2GRAY_YV12", "YUV2GRAY_YV12"},
             {cv::COLOR_YUV2GRAY_IYUV, "COLOR_YUV2GRAY_IYUV", "YUV2GRAY_IYUV"},
             {cv::COLOR_YUV2GRAY_I420, "COLOR_YUV2GRAY_I420", "YUV2GRAY_I420"},
             {cv::COLOR_YUV420sp2GRAY, "COLOR_YUV420sp2GRAY", "YUV420sp2GRAY"},
             {cv::COLOR_YUV420p2GRAY, "COLOR_YUV420p2GRAY", "YUV420p2GRAY"},
             {cv::COLOR_YUV2RGB_UYVY, "COLOR_YUV2RGB_UYVY", "YUV2RGB_UYVY"},
             {cv::COLOR_YUV2BGR_UYVY, "COLOR_YUV2BGR_UYVY", "YUV2BGR_UYVY"},
             {cv::COLOR_YUV2RGB_Y422, "COLOR_YUV2RGB_Y422", "YUV2RGB_Y422"},
             {cv::COLOR_YUV2BGR_Y422, "COLOR_YUV2BGR_Y422", "YUV2BGR_Y422"},
             {cv::COLOR_YUV2RGB_UYNV, "COLOR_YUV2RGB_UYNV", "YUV2RGB_UYNV"},
             {cv::COLOR_YUV2BGR_UYNV, "COLOR_YUV2BGR_UYNV", "YUV2BGR_UYNV"},
             {cv::COLOR_YUV2RGBA_UYVY, "COLOR_YUV2RGBA_UYVY", "YUV2RGBA_UYVY"},
             {cv::COLOR_YUV2BGRA_UYVY, "COLOR_YUV2BGRA_UYVY", "YUV2BGRA_UYVY"},
             {cv::COLOR_YUV2RGBA_Y422, "COLOR_YUV2RGBA_Y422", "YUV2RGBA_Y422"},
             {cv::COLOR_YUV2BGRA_Y422, "COLOR_YUV2BGRA_Y422", "YUV2BGRA_Y422"},
             {cv::COLOR_YUV2RGBA_UYNV, "COLOR_YUV2RGBA_UYNV", "YUV2RGBA_UYNV"},
             {cv::COLOR_YUV2BGRA_UYNV, "COLOR_YUV2BGRA_UYNV", "YUV2BGRA_UYNV"},
             {cv::COLOR_YUV2RGB_YUY2, "COLOR_YUV2RGB_YUY2", "YUV2RGB_YUY2"},
             {cv::COLOR_YUV2BGR_YUY2, "COLOR_YUV2BGR_YUY2", "YUV2BGR_YUY2"},
             {cv::COLOR_YUV2RGB_YVYU, "COLOR_YUV2RGB_YVYU", "YUV2RGB_YVYU"},
             {cv::COLOR_YUV2BGR_YVYU, "COLOR_YUV2BGR_YVYU", "YUV2BGR_YVYU"},
             {cv::COLOR_YUV2RGB_YUYV, "COLOR_YUV2RGB_YUYV", "YUV2RGB_YUYV"},
             {cv::COLOR_YUV2BGR_YUYV, "COLOR_YUV2BGR_YUYV", "YUV2BGR_YUYV"},
             {cv::COLOR_YUV2RGB_YUNV, "COLOR_YUV2RGB_YUNV", "YUV2RGB_YUNV"},
             {cv::COLOR_YUV2BGR_YUNV, "COLOR_YUV2BGR_YUNV", "YUV2BGR_YUNV"},
             {cv::COLOR_YUV2RGBA_YUY2, "COLOR_YUV2RGBA_YUY2", "YUV2RGBA_YUY2"},
             {cv::COLOR_YUV2BGRA_YUY2, "COLOR_YUV2BGRA_YUY2", "YUV2BGRA_YUY2"},
             {cv::COLOR_YUV2RGBA_YVYU, "COLOR_YUV2RGBA_YVYU", "YUV2RGBA_YVYU"},
             {cv::COLOR_YUV2BGRA_YVYU, "COLOR_YUV2BGRA_YVYU", "YUV2BGRA_YVYU"},
             {cv::COLOR_YUV2RGBA_YUYV, "COLOR_YUV2RGBA_YUYV", "YUV2RGBA_YUYV"},
             {cv::COLOR_YUV2BGRA_YUYV, "COLOR_YUV2BGRA_YUYV", "YUV2BGRA_YUYV"},
             {cv::COLOR_YUV2RGBA_YUNV, "COLOR_YUV2RGBA_YUNV", "YUV2RGBA_YUNV"},
             {cv::COLOR_YUV2BGRA_YUNV, "COLOR_YUV2BGRA_YUNV", "YUV2BGRA_YUNV"},
             {cv::COLOR_YUV2GRAY_UYVY, "COLOR_YUV2GRAY_UYVY", "YUV2GRAY_UYVY"},
             {cv::COLOR_YUV2GRAY_YUY2, "COLOR_YUV2GRAY_YUY2", "YUV2GRAY_YUY2"},
             {cv::COLOR_YUV2GRAY_Y422, "COLOR_YUV2GRAY_Y422", "YUV2GRAY_Y422"},
             {cv::COLOR_YUV2GRAY_UYNV, "COLOR_YUV2GRAY_UYNV", "YUV2GRAY_UYNV"},
             {cv::COLOR_YUV2GRAY_YVYU, "COLOR_YUV2GRAY_YVYU", "YUV2GRAY_YVYU"},
             {cv::COLOR_YUV2GRAY_YUYV, "COLOR_YUV2GRAY_YUYV", "YUV2GRAY_YUYV"},
             {cv::COLOR_YUV2GRAY_YUNV, "COLOR_YUV2GRAY_YUNV", "YUV2GRAY_YUNV"},
             {cv::COLOR_RGBA2mRGBA, "COLOR_RGBA2mRGBA", "RGBA2mRGBA"},
             {cv::COLOR_mRGBA2RGBA, "COLOR_mRGBA2RGBA", "mRGBA2RGBA"},
             {0, NULL, NULL}};

		type = g_enum_register_static("CvtColorEnum", values);
    }

	return type;
}

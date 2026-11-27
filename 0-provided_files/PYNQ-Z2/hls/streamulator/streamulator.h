// Streamulator test platform

#ifndef INC_H
#define INC_H


#include <stdint.h>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <sstream>
#include <hls_stream.h>
#include <ap_axi_sdata.h>

#include "axipng.h"

// Image dimensions
#define WIDTH 1280
#define HEIGHT 720

// Image paths
#define INPUT_DIR  "/home/simon/Documents/electrical_engineering/year_5/quarter_2/reconfigurable_computing_design/RCD_git/Video_Processing_Project/3-video_processing_with_overlays/inframes/"
#define OUTPUT_DIR "/home/simon/Documents/electrical_engineering/year_5/quarter_2/reconfigurable_computing_design/RCD_git/Video_Processing_Project/3-video_processing_with_overlays/outframes/"

#define FRAMES_LIST "/home/simon/Documents/electrical_engineering/year_5/quarter_2/reconfigurable_computing_design/RCD_git/Video_Processing_Project/3-video_processing_with_overlays/inframes/frames.txt"

#define RAW_FILENAME "/home/simon/Documents/electrical_engineering/year_5/quarter_2/reconfigurable_computing_design/RCD_git/Video_Processing_Project/3-video_processing_with_overlays/outframes/raw.png"


// Stream processing function
void stream (pixel_stream &src, pixel_stream &dst, int frame);


#endif // INC_H

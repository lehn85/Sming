#ifndef OV5640_REGS_H
#define OV5640_REGS_H
#include "ArduCAM.h"
//#include <avr/pgmspace.h>

#define OV5640_CHIPID_HIGH 0x300a
#define OV5640_CHIPID_LOW 0x300b

const struct sensor_reg OV5640YUV_Sensor_Dvp_Init[] PROGMEM=
{
		{ 0x4740, 0x20 },
		
		{ 0x4050, 0x6e },
    { 0x4051, 0x8f },
		
		{ 0x3008, 0x42 }, 
		{ 0x3103, 0x03 }, 
		{ 0x3017, 0x7f }, 
		{ 0x3018, 0xff }, 		
		{ 0x302c, 0xc2 }, 		
		{ 0x3108, 0x01 }, 	
		{ 0x3630, 0x2e },//2e
		{ 0x3632, 0xe2 }, 
		{ 0x3633, 0x23 },//23 
		{ 0x3621, 0xe0 }, 
		{ 0x3704, 0xa0 }, 
		{ 0x3703, 0x5a }, 
		{ 0x3715, 0x78 }, 
		{ 0x3717, 0x01 }, 
		{ 0x370b, 0x60 }, 
		{ 0x3705, 0x1a }, 
		{ 0x3905, 0x02 }, 
		{ 0x3906, 0x10 }, 
		{ 0x3901, 0x0a }, 
		{ 0x3731, 0x12 }, 
		{ 0x3600, 0x08 }, 
		{ 0x3601, 0x33 }, 
		{ 0x302d, 0x60 }, 
		{ 0x3620, 0x52 }, 
		{ 0x371b, 0x20 }, 
		{ 0x471c, 0x50 }, 
		
		{ 0x3a18, 0x00 }, 
		{ 0x3a19, 0xf8 }, 
		
		{ 0x3635, 0x1c },//1c
		{ 0x3634, 0x40 }, 
		{ 0x3622, 0x01 }, 
 
		{ 0x3c04, 0x28 }, 
		{ 0x3c05, 0x98 }, 
		{ 0x3c06, 0x00 }, 
		{ 0x3c07, 0x08 }, 
		{ 0x3c08, 0x00 }, 
		{ 0x3c09, 0x1c }, 
		{ 0x3c0a, 0x9c }, 
		{ 0x3c0b, 0x40 },  		

		{ 0x3820, 0x41 }, 
		{ 0x3821, 0x01 }, //07

		//windows setup
		{ 0x3800, 0x00 }, 
		{ 0x3801, 0x00 }, 
		{ 0x3802, 0x00 }, 
		{ 0x3803, 0x04 }, 
		{ 0x3804, 0x0a }, 
		{ 0x3805, 0x3f }, 
		{ 0x3806, 0x07 }, 
		{ 0x3807, 0x9b }, 
		{ 0x3808, 0x05 },  
		{ 0x3809, 0x00 }, 
		{ 0x380a, 0x03 }, 
		{ 0x380b, 0xc0 }, 		
		{ 0x3810, 0x00 }, 
		{ 0x3811, 0x10 }, 
		{ 0x3812, 0x00 }, 
		{ 0x3813, 0x06 }, 
		{ 0x3814, 0x31 }, 
		{ 0x3815, 0x31 },		
		
		{ 0x3034, 0x1a }, 
		{ 0x3035, 0x21 }, //15fps
		{ 0x3036, 0x46 }, 
		{ 0x3037, 0x13 }, 
		{ 0x3038, 0x00 }, 
		{ 0x3039, 0x00 }, 
		
		{ 0x380c, 0x07 }, 
		{ 0x380d, 0x68 }, 
		{ 0x380e, 0x03 }, //03
		{ 0x380f, 0xd8 }, //d8
		 
		{ 0x3c01, 0xb4 }, 
		{ 0x3c00, 0x04 }, 
		{ 0x3a08, 0x00 }, 
		{ 0x3a09, 0x93 }, 
		{ 0x3a0e, 0x06 },
		{ 0x3a0a, 0x00 }, 
		{ 0x3a0b, 0x7b }, 		 
		{ 0x3a0d, 0x08 }, 
		
		{ 0x3a00, 0x3c }, //15fps-10fps
		{ 0x3a02, 0x05 }, 
		{ 0x3a03, 0xc4 }, 
		{ 0x3a14, 0x05 }, 
		{ 0x3a15, 0xc4 }, 
		
		{ 0x3618, 0x00 }, 
		{ 0x3612, 0x29 }, 
		{ 0x3708, 0x64 }, 
		{ 0x3709, 0x52 }, 
		{ 0x370c, 0x03 },
		
		{ 0x4001, 0x02 }, 
		{ 0x4004, 0x02 }, 
		{ 0x3000, 0x00 }, 
		{ 0x3002, 0x1c }, 
		{ 0x3004, 0xff }, 
		{ 0x3006, 0xc3 }, 
		{ 0x300e, 0x58 }, 
		{ 0x302e, 0x00 }, 
		{ 0x4300, 0x30 }, 
		{ 0x501f, 0x00 }, 
		{ 0x4713, 0x03 }, 
		{ 0x4407, 0x04 }, 
		{ 0x460b, 0x35 }, 
		{ 0x460c, 0x22 },//add by bright 
	  { 0x3824, 0x01 },//add by bright 
		{ 0x5001, 0xa3 }, 		
		
		{ 0x3406, 0x01 },//awbinit
		{ 0x3400, 0x06 },
		{ 0x3401, 0x80 },
		{ 0x3402, 0x04 },
		{ 0x3403, 0x00 },
		{ 0x3404, 0x06 },
		{ 0x3405, 0x00 },
	  //awb           
		{ 0x5180, 0xff }, 
		{ 0x5181, 0xf2 },    
		{ 0x5182, 0x00 },   
		{ 0x5183, 0x14 },    
		{ 0x5184, 0x25 },    
		{ 0x5185, 0x24 },    
		{ 0x5186, 0x16 },    
		{ 0x5187, 0x16 },    
		{ 0x5188, 0x16 },    
		{ 0x5189, 0x62 },    
		{ 0x518a, 0x62 },    
		{ 0x518b, 0xf0 },    
		{ 0x518c, 0xb2 },    
		{ 0x518d, 0x50 },    
		{ 0x518e, 0x30 },    
		{ 0x518f, 0x30 },    
		{ 0x5190, 0x50 },    
		{ 0x5191, 0xf8 },    
		{ 0x5192, 0x04 },   
		{ 0x5193, 0x70 },    
		{ 0x5194, 0xf0 },    
		{ 0x5195, 0xf0 },    
		{ 0x5196, 0x03 },   
		{ 0x5197, 0x01 },   
		{ 0x5198, 0x04 },   
		{ 0x5199, 0x12 },    
		{ 0x519a, 0x04 },   
		{ 0x519b, 0x00 },   
		{ 0x519c, 0x06 },   
		{ 0x519d, 0x82 },    
		{ 0x519e, 0x38 },  
		//color matrix  	                                        	                                  
		{ 0x5381, 0x1e },  
		{ 0x5382, 0x5b }, 
		{ 0x5383, 0x14 }, 
		{ 0x5384, 0x06 }, 
		{ 0x5385, 0x82 }, 
		{ 0x5386, 0x88 }, 
		{ 0x5387, 0x7c }, 
		{ 0x5388, 0x60 }, 
		{ 0x5389, 0x1c }, 
		{ 0x538a, 0x01 }, 
		{ 0x538b, 0x98 }, 
		//sharp&noise
		{ 0x5300, 0x08 }, 
		{ 0x5301, 0x30 }, 
		{ 0x5302, 0x3f }, 
		{ 0x5303, 0x10 },
		{ 0x5304, 0x08 }, 
		{ 0x5305, 0x30 }, 
		{ 0x5306, 0x18 }, 
		{ 0x5307, 0x28 },
		{ 0x5309, 0x08 }, 
		{ 0x530a, 0x30 }, 
		{ 0x530b, 0x04 }, 
		{ 0x530c, 0x06 }, 	 
		//gamma                         
		{ 0x5480, 0x01 },
		{ 0x5481, 0x06 }, 
		{ 0x5482, 0x12 },  
		{ 0x5483, 0x24 },  
		{ 0x5484, 0x4a }, 
		{ 0x5485, 0x58 },  
		{ 0x5486, 0x65 },  
		{ 0x5487, 0x72 },  
		{ 0x5488, 0x7d },  
		{ 0x5489, 0x88 },  
		{ 0x548a, 0x92 },  
		{ 0x548b, 0xa3 },  
		{ 0x548c, 0xb2 },  
		{ 0x548d, 0xc8 },  
		{ 0x548e, 0xdd },  
		{ 0x548f, 0xf0 }, 
		{ 0x5490, 0x15 }, 	  
		//UV adjust                              	                    
		{ 0x5580, 0x06 }, 		
		{ 0x5583, 0x40 }, 
		{ 0x5584, 0x20 }, 
		{ 0x5589, 0x10 }, 
		{ 0x558a, 0x00 }, 
		{ 0x558b, 0xf8 },                                 
		//lens shading                                      
		{ 0x5000, 0xa7 },                                      	
		{ 0x5800, 0x20 }, 
		{ 0x5801, 0x19 }, 
		{ 0x5802, 0x17 }, 
		{ 0x5803, 0x16 }, 
		{ 0x5804, 0x18 }, 
		{ 0x5805, 0x21 }, 
		{ 0x5806, 0x0F }, 
		{ 0x5807, 0x0A }, 
		{ 0x5808, 0x07 }, 
		{ 0x5809, 0x07 }, 
		{ 0x580a, 0x0A }, 
		{ 0x580b, 0x0C }, 
		{ 0x580c, 0x0A }, 
		{ 0x580d, 0x03 }, 
		{ 0x580e, 0x01 }, 
		{ 0x580f, 0x01 }, 
		{ 0x5810, 0x03 }, 
		{ 0x5811, 0x09 }, 
		{ 0x5812, 0x0A }, 
		{ 0x5813, 0x03 }, 
		{ 0x5814, 0x01 }, 
		{ 0x5815, 0x01 }, 
		{ 0x5816, 0x03 }, 
		{ 0x5817, 0x08 }, 
		{ 0x5818, 0x10 }, 
		{ 0x5819, 0x0A }, 
		{ 0x581a, 0x06 }, 
		{ 0x581b, 0x06 }, 
		{ 0x581c, 0x08 }, 
		{ 0x581d, 0x0E }, 
		{ 0x581e, 0x22 }, 
		{ 0x581f, 0x18 }, 
		{ 0x5820, 0x13 }, 
		{ 0x5821, 0x12 }, 
		{ 0x5822, 0x16 }, 
		{ 0x5823, 0x1E }, 
		{ 0x5824, 0x64 }, 
		{ 0x5825, 0x2A }, 
		{ 0x5826, 0x2C }, 
		{ 0x5827, 0x2A }, 
		{ 0x5828, 0x46 }, 
		{ 0x5829, 0x2A }, 
		{ 0x582a, 0x26 }, 
		{ 0x582b, 0x24 }, 
		{ 0x582c, 0x26 }, 
		{ 0x582d, 0x2A }, 
		{ 0x582e, 0x28 }, 
		{ 0x582f, 0x42 }, 
		{ 0x5830, 0x40 }, 
		{ 0x5831, 0x42 }, 
		{ 0x5832, 0x08 }, 
		{ 0x5833, 0x28 }, 
		{ 0x5834, 0x26 }, 
		{ 0x5835, 0x24 }, 
		{ 0x5836, 0x26 }, 
		{ 0x5837, 0x2A }, 
		{ 0x5838, 0x44 }, 
		{ 0x5839, 0x4A }, 
		{ 0x583a, 0x2C }, 
		{ 0x583b, 0x2a }, 
		{ 0x583c, 0x46 }, 
		{ 0x583d, 0xCE }, 	
		
		{ 0x5688, 0x22 }, 
		{ 0x5689, 0x22 }, 
		{ 0x568a, 0x42 }, 
		{ 0x568b, 0x24 }, 
		{ 0x568c, 0x42 }, 
		{ 0x568d, 0x24 }, 
		{ 0x568e, 0x22 }, 
		{ 0x568f, 0x22 }, 
		
		{ 0x5025, 0x00 }, 
		
		{ 0x3a0f, 0x30 },
		{ 0x3a10, 0x28 }, 
		{ 0x3a1b, 0x30 }, 
		{ 0x3a1e, 0x28 }, 
		{ 0x3a11, 0x61 }, 
		{ 0x3a1f, 0x10 }, 
		
		{ 0x4005, 0x1a },
		{ 0x3406, 0x00 },//awbinit
    { 0x3503, 0x00 },//awbinit
		{ 0x3008, 0x02 }, 
		{ 0xffff, 0xff },		
};



const struct sensor_reg ov5640_vga_preview[] PROGMEM=
{
		// YUV VGA 30fps, night mode 5fps
		// Input Clock = 24Mhz, PCLK = 56MHz
		{ 0x3035, 0x11 }, // PLL
		{ 0x3036, 0x46 }, // PLL
		{ 0x3c07, 0x08 }, // light meter 1 threshold [7:0]
		{ 0x3820, 0x41 }, // Sensor flip off, ISP flip on
		{ 0x3821, 0x01 }, // Sensor mirror on, ISP mirror on, H binning on
		{ 0x3814, 0x31 }, // X INC
		{ 0x3815, 0x31 }, // Y INC
		{ 0x3800, 0x00 }, // HS
		{ 0x3801, 0x00 }, // HS
		{ 0x3802, 0x00 }, // VS
		{ 0x3803, 0x04 }, // VS
		{ 0x3804, 0x0a }, // HW (HE)
		{ 0x3805, 0x3f }, // HW (HE)
		{ 0x3806, 0x07 }, // VH (VE)
		{ 0x3807, 0x9b }, // VH (VE)
		{ 0x3808, 0x02 }, // DVPHO
		{ 0x3809, 0x80 }, // DVPHO
		{ 0x380a, 0x01 }, // DVPVO
		{ 0x380b, 0xe0 }, // DVPVO
		{ 0x380c, 0x07 }, // HTS
		{ 0x380d, 0x68 }, // HTS
		{ 0x380e, 0x03 }, // VTS
		{ 0x380f, 0xd8 }, // VTS
		{ 0x3813, 0x06 }, // Timing Voffset
		{ 0x3618, 0x00 },
		{ 0x3612, 0x29 },
		{ 0x3709, 0x52 },
		{ 0x370c, 0x03 },
		{ 0x3a02, 0x17 }, // 60Hz max exposure, night mode 5fps
		{ 0x3a03, 0x10 }, // 60Hz max exposure
		// banding filters are calculated automatically in camera driver
		//{ 0x3a08, 0x01 }, // B50 step
		//{ 0x3a09, 0x27 }, // B50 step
		//{ 0x3a0a, 0x00 }, // B60 step
		//{ 0x3a0b, 0xf6 }, // B60 step
		//{ 0x3a0e, 0x03 }, // 50Hz max band
		//{ 0x3a0d, 0x04 }, // 60Hz max band
		{ 0x3a14, 0x17 }, // 50Hz max exposure, night mode 5fps
		{ 0x3a15, 0x10 }, // 50Hz max exposure
		{ 0x4004, 0x02 }, // BLC 2 lines
		{ 0x3002, 0x1c }, // reset JFIFO, SFIFO, JPEG
		{ 0x3006, 0xc3 }, // disable clock of JPEG2x, JPEG
		{ 0x4713, 0x03 }, // JPEG mode 3
		{ 0x4407, 0x04 }, // Quantization scale
		{ 0x460b, 0x35 },
		{ 0x460c, 0x22 },
		{ 0x4837, 0x22 }, // DVP CLK divider
		{ 0x3824, 0x02 }, // DVP CLK divider
		{ 0x5001, 0xa3 }, // SDE on, scale on, UV average off, color matrix on, AWB on
		{ 0x3503, 0x00 }, // AEC/AGC on	
		
}; 

const struct sensor_reg ov5640_dvp_fmt_global_init[] PROGMEM=
{
		//15fps VGA YUV output
		// 24MHz input clock, 24MHz PCLK
		{ 0x3103, 0x11 }, // system clock from pad, bit[1]
		{ 0x3008, 0x82 }, // software reset, bit[7]
		// delay 5ms
		{ 0x3008, 0x42 }, // software power down, bit[6]
		{ 0x3103, 0x03 }, // system clock from PLL, bit[1]
		{ 0x3017, 0xff }, // FREX, Vsync, HREF, PCLK, D[9:6] output enable
		{ 0x3018, 0xff }, // D[5:0], GPIO[1:0] output enable
		{ 0x3034, 0x1a }, // MIPI 10-bit
		{ 0x3037, 0x13 }, // PLL root divider, bit[4], PLL pre-divider, bit[3:0]
		{ 0x3108, 0x01 }, // PCLK root divider, bit[5:4], SCLK2x root divider, bit[3:2]
		// SCLK root divider, bit[1:0]
		{ 0x3630, 0x36 },
		{ 0x3631, 0x0e },
		{ 0x3632, 0xe2 },
		{ 0x3633, 0x12 },
		{ 0x3621, 0xe0 },
		{ 0x3704, 0xa0 },
		{ 0x3703, 0x5a },
		{ 0x3715, 0x78 },
		{ 0x3717, 0x01 },
		{ 0x370b, 0x60 },
		{ 0x3705, 0x1a },
		{ 0x3905, 0x02 },
		{ 0x3906, 0x10 },
		{ 0x3901, 0x0a },
		{ 0x3731, 0x12 },
		{ 0x3600, 0x08 }, // VCM control
		{ 0x3601, 0x33 }, // VCM control
		{ 0x302d, 0x60 }, // system control
		{ 0x3620, 0x52 },
		{ 0x371b, 0x20 },
		{ 0x471c, 0x50 },
		{ 0x3a13, 0x43 }, // pre-gain = 1.047x
		{ 0x3a18, 0x00 }, // gain ceiling
		{ 0x3a19, 0xf8 }, // gain ceiling = 15.5x
		{ 0x3635, 0x13 },
		{ 0x3636, 0x03 },
		{ 0x3634, 0x40 },
		{ 0x3622, 0x01 },
		// 50/60Hz detection 50/60Hz 灯光条纹过滤
		{ 0x3c01, 0x34 }, // Band auto, bit[7]
		{ 0x3c04, 0x28 }, // threshold low sum
		{ 0x3c05, 0x98 }, // threshold high sum
		{ 0x3c06, 0x00 }, // light meter 1 threshold[15:8]
		{ 0x3c07, 0x08 }, // light meter 1 threshold[7:0]
		{ 0x3c08, 0x00 }, // light meter 2 threshold[15:8]
		{ 0x3c09, 0x1c }, // light meter 2 threshold[7:0]
		{ 0x3c0a, 0x9c }, // sample number[15:8]
		{ 0x3c0b, 0x40 }, // sample number[7:0]
		{ 0x3810, 0x00 }, // Timing Hoffset[11:8]
		{ 0x3811, 0x10 }, // Timing Hoffset[7:0]
		{ 0x3812, 0x00 }, // Timing Voffset[10:8]
		{ 0x3708, 0x64 },
		{ 0x4001, 0x02 }, // BLC start from line 2
		{ 0x4005, 0x1a }, // BLC always update
		{ 0x3000, 0x00 }, // enable blocks
		{ 0x3004, 0xff }, // enable clocks
		{ 0x300e, 0x58 }, // MIPI power down, DVP enable
		{ 0x302e, 0x00 },
		{ 0x4300, 0x30 }, // YUV 422, YUYV
		{ 0x501f, 0x00 }, // YUV 422
		{ 0x440e, 0x00 },
		{ 0x5000, 0xa7 }, // Lenc on, raw gamma on, BPC on, WPC on, CIP on
		// AEC target 自动曝光控制
		{ 0x3a0f, 0x30 }, // stable range in high
		{ 0x3a10, 0x28 }, // stable range in low
		{ 0x3a1b, 0x30 }, // stable range out high
		{ 0x3a1e, 0x26 }, // stable range out low
		{ 0x3a11, 0x60 }, // fast zone high
		{ 0x3a1f, 0x14 }, // fast zone low
		// Lens correction for ? 镜头补偿
		{ 0x5800, 0x23 },
		{ 0x5801, 0x14 },
		{ 0x5802, 0x0f },
		{ 0x5803, 0x0f },
		{ 0x5804, 0x12 },
		{ 0x5805, 0x26 },
		{ 0x5806, 0x0c },
		{ 0x5807, 0x08 },
		{ 0x5808, 0x05 },
		{ 0x5809, 0x05 },
		{ 0x580a, 0x08 },
		{ 0x580b, 0x0d },
		{ 0x580c, 0x08 },
		{ 0x580d, 0x03 },
		{ 0x580e, 0x00 },
		{ 0x580f, 0x00 },
		{ 0x5810, 0x03 },
		{ 0x5811, 0x09 },
		{ 0x5812, 0x07 },
		{ 0x5813, 0x03 },
		{ 0x5814, 0x00 },
		{ 0x5815, 0x01 },
		{ 0x5816, 0x03 },
		{ 0x5817, 0x08 },
		{ 0x5818, 0x0d },
		{ 0x5819, 0x08 },
		{ 0x581a, 0x05 },
		{ 0x581b, 0x06 },
		{ 0x581c, 0x08 },
		{ 0x581d, 0x0e },
		{ 0x581e, 0x29 },
		{ 0x581f, 0x17 },
		{ 0x5820, 0x11 },
		{ 0x5821, 0x11 },
		{ 0x5822, 0x15 },
		{ 0x5823, 0x28 },
		{ 0x5824, 0x46 },
		{ 0x5825, 0x26 },
		{ 0x5826, 0x08 },
		{ 0x5827, 0x26 },
		{ 0x5828, 0x64 },
		{ 0x5829, 0x26 },
		{ 0x582a, 0x24 },
		{ 0x582b, 0x22 },
		{ 0x582c, 0x24 },
		{ 0x582d, 0x24 },
		{ 0x582e, 0x06 },
		{ 0x582f, 0x22 },
		{ 0x5830, 0x40 },
		{ 0x5831, 0x42 },
		{ 0x5832, 0x24 },
		{ 0x5833, 0x26 },
		{ 0x5834, 0x24 },
		{ 0x5835, 0x22 },
		{ 0x5836, 0x22 },
		{ 0x5837, 0x26 },
		{ 0x5838, 0x44 },
		{ 0x5839, 0x24 },
		{ 0x583a, 0x26 },
		{ 0x583b, 0x28 },
		{ 0x583c, 0x42 },
		{ 0x583d, 0xce }, // lenc BR offset
		// AWB 自动白平衡
		{ 0x5180, 0xff }, // AWB B block
		{ 0x5181, 0xf2 }, // AWB control
		{ 0x5182, 0x00 }, // [7:4] max local counter, [3:0] max fast counter
		{ 0x5183, 0x14 }, // AWB advanced
		{ 0x5184, 0x25 },
		{ 0x5185, 0x24 },
		{ 0x5186, 0x09 },
		{ 0x5187, 0x09 },
		{ 0x5188, 0x09 },
		{ 0x5189, 0x75 },
		{ 0x518a, 0x54 },
		{ 0x518b, 0xe0 },
		{ 0x518c, 0xb2 },
		{ 0x518d, 0x42 },
		{ 0x518e, 0x3d },
		{ 0x518f, 0x56 },
		{ 0x5190, 0x46 },
		{ 0x5191, 0xf8 }, // AWB top limit
		{ 0x5192, 0x04 }, // AWB bottom limit
		{ 0x5193, 0x70 }, // red limit
		{ 0x5194, 0xf0 }, // green limit
		{ 0x5195, 0xf0 }, // blue limit
		{ 0x5196, 0x03 }, // AWB control
		{ 0x5197, 0x01 }, // local limit
		{ 0x5198, 0x04 },
		{ 0x5199, 0x12 },
		{ 0x519a, 0x04 },
		{ 0x519b, 0x00 },
		{ 0x519c, 0x06 },
		{ 0x519d, 0x82 },
		{ 0x519e, 0x38 }, // AWB control
		// Gamma 伽玛曲线
		{ 0x5480, 0x01 }, // Gamma bias plus on, bit[0]
		{ 0x5481, 0x08 },
		{ 0x5482, 0x14 },
		{ 0x5483, 0x28 },
		{ 0x5484, 0x51 },
		{ 0x5485, 0x65 },
		{ 0x5486, 0x71 },
		{ 0x5487, 0x7d },
		{ 0x5488, 0x87 },
		{ 0x5489, 0x91 },
		{ 0x548a, 0x9a },
		{ 0x548b, 0xaa },
		{ 0x548c, 0xb8 },
		{ 0x548d, 0xcd },
		{ 0x548e, 0xdd },
		{ 0x548f, 0xea },
		{ 0x5490, 0x1d },
		// color matrix 色彩矩阵
		{ 0x5381, 0x1e }, // CMX1 for Y
		{ 0x5382, 0x5b }, // CMX2 for Y
		{ 0x5383, 0x08 }, // CMX3 for Y
		{ 0x5384, 0x0a }, // CMX4 for U
		{ 0x5385, 0x7e }, // CMX5 for U
		{ 0x5386, 0x88 }, // CMX6 for U
		{ 0x5387, 0x7c }, // CMX7 for V
		{ 0x5388, 0x6c }, // CMX8 for V
		{ 0x5389, 0x10 }, // CMX9 for V
		{ 0x538a, 0x01 }, // sign[9]
		{ 0x538b, 0x98 }, // sign[8:1]
		// UV adjust UV色彩饱和度调整
		{ 0x5580, 0x06 }, // saturation on, bit[1]
		{ 0x5583, 0x40 },
		{ 0x5584, 0x10 },
		{ 0x5589, 0x10 },
		{ 0x558a, 0x00 },
		{ 0x558b, 0xf8 },
		{ 0x501d, 0x40 }, // enable manual offset of contrast
		// CIP 锐化和降噪
		{ 0x5300, 0x08 }, // CIP sharpen MT threshold 1
		{ 0x5301, 0x30 }, // CIP sharpen MT threshold 2
		{ 0x5302, 0x10 }, // CIP sharpen MT offset 1
		{ 0x5303, 0x00 }, // CIP sharpen MT offset 2
		{ 0x5304, 0x08 }, // CIP DNS threshold 1
		{ 0x5305, 0x30 }, // CIP DNS threshold 2
		{ 0x5306, 0x08 }, // CIP DNS offset 1
		{ 0x5307, 0x16 }, // CIP DNS offset 2
		{ 0x5309, 0x08 }, // CIP sharpen TH threshold 1
		{ 0x530a, 0x30 }, // CIP sharpen TH threshold 2
		{ 0x530b, 0x04 }, // CIP sharpen TH offset 1
		{ 0x530c, 0x06 }, // CIP sharpen TH offset 2
		{ 0x5025, 0x00 },
		{ 0x3008, 0x02 }, // wake up from standby, bit[6]
		{ 0xffff, 0xff },
}; 

const struct sensor_reg OV5640_RGB_QVGA[] PROGMEM =
{
		{0x3008, 0x02},
		{0x3035, 0x41},
		{0x4740, 0x21},
		{0x4300, 0x61},
		{0x3808, 0x01},
		{0x3809, 0x40},
		{0x380a, 0x00},
		{0x380b, 0xf0},
		{0x501f, 0x01}, 
		{0xffff, 0xff},
};       


#endif


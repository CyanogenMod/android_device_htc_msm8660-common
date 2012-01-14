/* Copyright (c) 2009-2010, Code Aurora Forum. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301, USA.
 *
 */

#ifndef __LINUX_MSM_CAMERA_H
#define __LINUX_MSM_CAMERA_H

#include <linux/types.h>
#include <asm/sizes.h>
#include <linux/ioctl.h>
#include <linux/time.h>

#define MAX_SENSOR_NUM  5
#define MAX_SENSOR_NAME 32


#define MSM_CAM_IOCTL_MAGIC 'm'

#define MSM_CAM_IOCTL_GET_SENSOR_INFO \
	_IOR(MSM_CAM_IOCTL_MAGIC, 1, struct msm_camsensor_info *)

#define MSM_CAM_IOCTL_REGISTER_PMEM \
	_IOW(MSM_CAM_IOCTL_MAGIC, 2, struct msm_pmem_info *)

#define MSM_CAM_IOCTL_UNREGISTER_PMEM \
	_IOW(MSM_CAM_IOCTL_MAGIC, 3, unsigned)

#define MSM_CAM_IOCTL_CTRL_COMMAND \
	_IOW(MSM_CAM_IOCTL_MAGIC, 4, struct msm_ctrl_cmd *)

#define MSM_CAM_IOCTL_CONFIG_VFE  \
	_IOW(MSM_CAM_IOCTL_MAGIC, 5, struct msm_camera_vfe_cfg_cmd *)

#define MSM_CAM_IOCTL_GET_STATS \
	_IOR(MSM_CAM_IOCTL_MAGIC, 6, struct msm_camera_stats_event_ctrl *)

#define MSM_CAM_IOCTL_GETFRAME \
	_IOR(MSM_CAM_IOCTL_MAGIC, 7, struct msm_camera_get_frame *)

#define MSM_CAM_IOCTL_ENABLE_VFE \
	_IOW(MSM_CAM_IOCTL_MAGIC, 8, struct camera_enable_cmd *)

#define MSM_CAM_IOCTL_CTRL_CMD_DONE \
	_IOW(MSM_CAM_IOCTL_MAGIC, 9, struct camera_cmd *)

#define MSM_CAM_IOCTL_CONFIG_CMD \
	_IOW(MSM_CAM_IOCTL_MAGIC, 10, struct camera_cmd *)

#define MSM_CAM_IOCTL_DISABLE_VFE \
	_IOW(MSM_CAM_IOCTL_MAGIC, 11, struct camera_enable_cmd *)

#define MSM_CAM_IOCTL_PAD_REG_RESET2 \
	_IOW(MSM_CAM_IOCTL_MAGIC, 12, struct camera_enable_cmd *)

#define MSM_CAM_IOCTL_VFE_APPS_RESET \
	_IOW(MSM_CAM_IOCTL_MAGIC, 13, struct camera_enable_cmd *)

#define MSM_CAM_IOCTL_RELEASE_FRAME_BUFFER \
	_IOW(MSM_CAM_IOCTL_MAGIC, 14, struct camera_enable_cmd *)

#define MSM_CAM_IOCTL_RELEASE_STATS_BUFFER \
	_IOW(MSM_CAM_IOCTL_MAGIC, 15, struct msm_stats_buf *)

#define MSM_CAM_IOCTL_AXI_CONFIG \
	_IOW(MSM_CAM_IOCTL_MAGIC, 16, struct msm_camera_vfe_cfg_cmd *)

#define MSM_CAM_IOCTL_GET_PICTURE \
	_IOW(MSM_CAM_IOCTL_MAGIC, 17, struct msm_camera_ctrl_cmd *)

#define MSM_CAM_IOCTL_SET_CROP \
	_IOW(MSM_CAM_IOCTL_MAGIC, 18, struct crop_info *)

#define MSM_CAM_IOCTL_PICT_PP \
	_IOW(MSM_CAM_IOCTL_MAGIC, 19, uint8_t *)

#define MSM_CAM_IOCTL_PICT_PP_DONE \
	_IOW(MSM_CAM_IOCTL_MAGIC, 20, struct msm_snapshot_pp_status *)

#define MSM_CAM_IOCTL_SENSOR_IO_CFG \
	_IOW(MSM_CAM_IOCTL_MAGIC, 21, struct sensor_cfg_data *)

#define MSM_CAM_IOCTL_FLASH_LED_CFG \
	_IOW(MSM_CAM_IOCTL_MAGIC, 22, unsigned *)

#define MSM_CAM_IOCTL_UNBLOCK_POLL_FRAME \
	_IO(MSM_CAM_IOCTL_MAGIC, 23)

#define MSM_CAM_IOCTL_CTRL_COMMAND_2 \
	_IOW(MSM_CAM_IOCTL_MAGIC, 24, struct msm_ctrl_cmd *)

#define MSM_CAM_IOCTL_AF_CTRL \
	_IOR(MSM_CAM_IOCTL_MAGIC, 25, struct msm_ctrl_cmt_t *)

#define MSM_CAM_IOCTL_AF_CTRL_DONE \
	_IOW(MSM_CAM_IOCTL_MAGIC, 26, struct msm_ctrl_cmt_t *)

#define MSM_CAM_IOCTL_CONFIG_VPE \
	_IOW(MSM_CAM_IOCTL_MAGIC, 27, struct msm_camera_vpe_cfg_cmd *)

#define MSM_CAM_IOCTL_AXI_VPE_CONFIG \
	_IOW(MSM_CAM_IOCTL_MAGIC, 28, struct msm_camera_vpe_cfg_cmd *)

#define MSM_CAM_IOCTL_STROBE_FLASH_CFG \
	_IOW(MSM_CAM_IOCTL_MAGIC, 29, uint32_t *)

#define MSM_CAM_IOCTL_STROBE_FLASH_CHARGE \
	_IOW(MSM_CAM_IOCTL_MAGIC, 30, uint32_t *)

#define MSM_CAM_IOCTL_STROBE_FLASH_RELEASE \
	_IO(MSM_CAM_IOCTL_MAGIC, 31)

#define MSM_CAM_IOCTL_FLASH_CTRL \
	_IOW(MSM_CAM_IOCTL_MAGIC, 32, struct flash_ctrl_data *)

#define MSM_CAM_IOCTL_ERROR_CONFIG \
	_IOW(MSM_CAM_IOCTL_MAGIC, 33, uint32_t *)

#define MSM_CAM_IOCTL_ABORT_CAPTURE \
	_IO(MSM_CAM_IOCTL_MAGIC, 34)

#define MSM_CAM_IOCTL_SET_FD_ROI \
	_IOW(MSM_CAM_IOCTL_MAGIC, 35, struct fd_roi_info *)

#define MSM_CAM_IOCTL_GET_CAMERA_INFO \
	_IOR(MSM_CAM_IOCTL_MAGIC, 36, struct msm_camera_info *)

#define MSM_CAM_IOCTL_PUT_ST_FRAME \
	_IOW(MSM_CAM_IOCTL_MAGIC, 37, struct msm_camera_st_frame *)

#define MSM_CAMERA_LED_OFF  0
#define MSM_CAMERA_LED_LOW  1
#define MSM_CAMERA_LED_HIGH 2

#define MSM_CAMERA_STROBE_FLASH_NONE 0
#define MSM_CAMERA_STROBE_FLASH_XENON 1



#define PP_SNAP  0x01
#define PP_RAW_SNAP ((0x01)<<1)
#define PP_PREV  ((0x01)<<2)
#define PP_MASK		(PP_SNAP|PP_RAW_SNAP|PP_PREV)

#define MSM_CAM_CTRL_CMD_DONE  0
#define MSM_CAM_SENSOR_VFE_CMD 1

/*****************************************************
 *  structure
 *****************************************************/

/* define five type of structures for userspace <==> kernel
 * space communication:
 * command 1 - 2 are from userspace ==> kernel
 * command 3 - 4 are from kernel ==> userspace
 *
 * 1. control command: control command(from control thread),
 *                     control status (from config thread);
 */
struct msm_ctrl_cmd {
	uint16_t type;
	uint16_t length;
	void *value;
	uint16_t status;
	uint32_t timeout_ms;
	int resp_fd; /* FIXME: to be used by the kernel, pass-through for now */
};

struct msm_vfe_evt_msg {
	unsigned short type;	/* 1 == event (RPC), 0 == message (adsp) */
	unsigned short msg_id;
	unsigned int len;	/* size in, number of bytes out */
	uint32_t frame_id;
	void *data;
};
struct msm_isp_evt_msg {
	unsigned short type;	/* 1 == event (RPC), 0 == message (adsp) */
	unsigned short msg_id;
	unsigned int len;	/* size in, number of bytes out */
	/* maximum possible data size that can be
i	  sent to user space as v4l2 data structure
	  is only of 64 bytes */
	uint8_t data[48];
};
struct msm_vpe_evt_msg {
	unsigned short type; /* 1 == event (RPC), 0 == message (adsp) */
	unsigned short msg_id;
	unsigned int len; /* size in, number of bytes out */
	uint32_t frame_id;
	void *data;
};
struct msm_isp_stats_event_ctrl {
	unsigned short resptype;
	union {
		struct msm_isp_evt_msg isp_msg;
		struct msm_ctrl_cmd ctrl;
	} isp_data;
};

#define MSM_CAM_RESP_CTRL         0
#define MSM_CAM_RESP_STAT_EVT_MSG 1
#define MSM_CAM_RESP_STEREO_OP_1  2
#define MSM_CAM_RESP_STEREO_OP_2  3
#define MSM_CAM_RESP_V4L2         4
#define MSM_CAM_RESP_MAX          5

/* this one is used to send ctrl/status up to config thread */
struct msm_stats_event_ctrl {
	/* 0 - ctrl_cmd from control thread,
	 * 1 - stats/event kernel,
	 * 2 - V4L control or read request */
	int resptype;
	int timeout_ms;
	struct msm_ctrl_cmd ctrl_cmd;
	/* struct  vfe_event_t  stats_event; */
	struct msm_vfe_evt_msg stats_event;
};

/* 2. config command: config command(from config thread); */
struct msm_camera_cfg_cmd {
	/* what to config:
	 * 1 - sensor config, 2 - vfe config */
	uint16_t cfg_type;

	/* sensor config type */
	uint16_t cmd_type;
	uint16_t queue;
	uint16_t length;
	void *value;
};

#define CMD_GENERAL			0
#define CMD_AXI_CFG_OUT1		1
#define CMD_AXI_CFG_SNAP_O1_AND_O2	2
#define CMD_AXI_CFG_OUT2		3
#define CMD_PICT_T_AXI_CFG		4
#define CMD_PICT_M_AXI_CFG		5
#define CMD_RAW_PICT_AXI_CFG		6

#define CMD_FRAME_BUF_RELEASE		7
#define CMD_PREV_BUF_CFG		8
#define CMD_SNAP_BUF_RELEASE		9
#define CMD_SNAP_BUF_CFG		10
#define CMD_STATS_DISABLE		11
#define CMD_STATS_AEC_AWB_ENABLE	12
#define CMD_STATS_AF_ENABLE		13
#define CMD_STATS_AEC_ENABLE		14
#define CMD_STATS_AWB_ENABLE		15
#define CMD_STATS_ENABLE  		16

#define CMD_STATS_AXI_CFG		17
#define CMD_STATS_AEC_AXI_CFG		18
#define CMD_STATS_AF_AXI_CFG 		19
#define CMD_STATS_AWB_AXI_CFG		20
#define CMD_STATS_RS_AXI_CFG		21
#define CMD_STATS_CS_AXI_CFG		22
#define CMD_STATS_IHIST_AXI_CFG		23
#define CMD_STATS_SKIN_AXI_CFG		24

#define CMD_STATS_BUF_RELEASE		25
#define CMD_STATS_AEC_BUF_RELEASE	26
#define CMD_STATS_AF_BUF_RELEASE	27
#define CMD_STATS_AWB_BUF_RELEASE	28
#define CMD_STATS_RS_BUF_RELEASE	29
#define CMD_STATS_CS_BUF_RELEASE	30
#define CMD_STATS_IHIST_BUF_RELEASE	31
#define CMD_STATS_SKIN_BUF_RELEASE	32

#define UPDATE_STATS_INVALID		33
#define CMD_AXI_CFG_SNAP_GEMINI		34
#define CMD_AXI_CFG_SNAP		35
#define CMD_AXI_CFG_PREVIEW		36
#define CMD_AXI_CFG_VIDEO		37

#define CMD_STATS_IHIST_ENABLE 38
#define CMD_STATS_RS_ENABLE 39
#define CMD_STATS_CS_ENABLE 40
#define CMD_VPE 41
#define CMD_AXI_CFG_VPE 42
#define CMD_AXI_CFG_SNAP_VPE 43
#define CMD_AXI_CFG_SNAP_THUMB_VPE 44

/* vfe config command: config command(from config thread)*/
struct msm_vfe_cfg_cmd {
	int cmd_type;
	uint16_t length;
	void *value;
};

struct msm_vpe_cfg_cmd {
	int cmd_type;
	uint16_t length;
	void *value;
};

#define MAX_CAMERA_ENABLE_NAME_LEN 32
struct camera_enable_cmd {
	char name[MAX_CAMERA_ENABLE_NAME_LEN];
};

#define MSM_PMEM_OUTPUT1		0
#define MSM_PMEM_OUTPUT2		1
#define MSM_PMEM_OUTPUT1_OUTPUT2	2
#define MSM_PMEM_THUMBNAIL		3
#define MSM_PMEM_MAINIMG		4
#define MSM_PMEM_RAW_MAINIMG		5
#define MSM_PMEM_AEC_AWB		6
#define MSM_PMEM_AF			7
#define MSM_PMEM_AEC			8
#define MSM_PMEM_AWB			9
#define MSM_PMEM_RS		    	10
#define MSM_PMEM_CS	    		11
#define MSM_PMEM_IHIST			12
#define MSM_PMEM_SKIN			13
#define MSM_PMEM_VIDEO			14
#define MSM_PMEM_PREVIEW		15
#define MSM_PMEM_VIDEO_VPE		16
#define MSM_PMEM_C2D			17
#define MSM_PMEM_MAINIMG_VPE    18
#define MSM_PMEM_THUMBNAIL_VPE  19
#define MSM_PMEM_MAX            20

#define STAT_AEAW			0
#define STAT_AEC			1
#define STAT_AF				2
#define STAT_AWB			3
#define STAT_RS				4
#define STAT_CS				5
#define STAT_IHIST			6
#define STAT_SKIN			7
#define STAT_MAX			8

#define FRAME_PREVIEW_OUTPUT1		0
#define FRAME_PREVIEW_OUTPUT2		1
#define FRAME_SNAPSHOT			2
#define FRAME_THUMBNAIL			3
#define FRAME_RAW_SNAPSHOT		4
#define FRAME_MAX			5

struct msm_pmem_info {
	int type;
	int fd;
	void *vaddr;
	uint32_t offset;
	uint32_t len;
	uint32_t y_off;
	uint32_t cbcr_off;
	uint8_t active;
};

struct outputCfg {
	uint32_t height;
	uint32_t width;

	uint32_t window_height_firstline;
	uint32_t window_height_lastline;
};

#define OUTPUT_1	0
#define OUTPUT_2	1
#define OUTPUT_1_AND_2            2   /* snapshot only */
#define OUTPUT_1_AND_3            3   /* video */
#define CAMIF_TO_AXI_VIA_OUTPUT_2 4
#define OUTPUT_1_AND_CAMIF_TO_AXI_VIA_OUTPUT_2 5
#define OUTPUT_2_AND_CAMIF_TO_AXI_VIA_OUTPUT_1 6
#define LAST_AXI_OUTPUT_MODE_ENUM = OUTPUT_2_AND_CAMIF_TO_AXI_VIA_OUTPUT_1 7

#define MSM_FRAME_PREV_1	0
#define MSM_FRAME_PREV_2	1
#define MSM_FRAME_ENC		2

#define OUTPUT_TYPE_P		(1<<0)
#define OUTPUT_TYPE_T		(1<<1)
#define OUTPUT_TYPE_S		(1<<2)
#define OUTPUT_TYPE_V		(1<<3)
#define OUTPUT_TYPE_L		(1<<4)
#define OUTPUT_TYPE_ST_L (1<<5)
#define OUTPUT_TYPE_ST_R (1<<6)
#define OUTPUT_TYPE_ST_D (1<<7)

struct fd_roi_info {
	void *info;
	int info_len;
};

struct msm_frame {
	struct timespec ts;
	int path;
	int type;
	unsigned long buffer;
	uint32_t phy_offset;
	uint32_t y_off;
	uint32_t cbcr_off;
	int fd;

	void *cropinfo;
	int croplen;
	uint32_t error_code;
	struct fd_roi_info roi_info;
	uint32_t frame_id;
};

enum msm_st_frame_packing {
	SIDE_BY_SIDE_HALF,
	SIDE_BY_SIDE_FULL,
	TOP_DOWN_HALF,
	TOP_DOWN_FULL,
};

struct msm_st_crop {
	uint32_t in_w;
	uint32_t in_h;
	uint32_t out_w;
	uint32_t out_h;
};

struct msm_st_half {
	uint32_t buf_y_off;
	uint32_t buf_cbcr_off;
	uint32_t buf_y_stride;
	uint32_t buf_cbcr_stride;
	uint32_t pix_x_off;
	uint32_t pix_y_off;
	struct msm_st_crop stCropInfo;
};

struct msm_st_frame {
	struct msm_frame buf_info;
	int type;
	enum msm_st_frame_packing packing;
	struct msm_st_half L;
	struct msm_st_half R;
	int frame_id;
};

#define MSM_CAMERA_ERR_MASK (0xFFFFFFFF & 1)

struct msm_stats_buf {
	int type;
	unsigned long buffer;
	int fd;
	uint32_t frame_id;
};

#define MSM_V4L2_VID_CAP_TYPE	0
#define MSM_V4L2_STREAM_ON	1
#define MSM_V4L2_STREAM_OFF	2
#define MSM_V4L2_SNAPSHOT	3
#define MSM_V4L2_QUERY_CTRL	4
#define MSM_V4L2_GET_CTRL	5
#define MSM_V4L2_SET_CTRL	6
#define MSM_V4L2_QUERY		7
#define MSM_V4L2_GET_CROP	8
#define MSM_V4L2_SET_CROP	9
#define MSM_V4L2_MAX		10

#define V4L2_CAMERA_EXIT 	43
struct crop_info {
	void *info;
	int len;
};

struct msm_postproc {
	int ftnum;
	struct msm_frame fthumnail;
	int fmnum;
	struct msm_frame fmain;
};



enum flash_type {
	LED_FLASH,
	STROBE_FLASH,
};

enum strobe_flash_ctrl_type {
	STROBE_FLASH_CTRL_INIT,
	STROBE_FLASH_CTRL_CHARGE,
	STROBE_FLASH_CTRL_RELEASE
};

struct strobe_flash_ctrl_data {
	enum strobe_flash_ctrl_type type;
	int charge_en;
};

struct flash_ctrl_data {
	int flashtype;
	union {
		int led_state;
		struct strobe_flash_ctrl_data strobe_ctrl;
	} ctrl_data;
};

struct msm_snapshot_pp_status {
	void *status;
};

struct msm_camsensor_info {
	char name[MAX_SENSOR_NAME];
	uint8_t flash_enabled;
	int8_t total_steps;
};

struct msm_camera_info {
	int num_cameras;
	uint8_t has_3d_support[MAX_SENSOR_NUM];
	uint8_t is_internal_cam[MAX_SENSOR_NUM];
};

#define CFG_SET_MODE			0
#define CFG_SET_EFFECT			1
#define CFG_START			2
#define CFG_PWR_UP			3
#define CFG_PWR_DOWN			4
#define CFG_WRITE_EXPOSURE_GAIN		5
#define CFG_SET_DEFAULT_FOCUS		6
#define CFG_MOVE_FOCUS			7
#define CFG_REGISTER_TO_REAL_GAIN	8
#define CFG_REAL_TO_REGISTER_GAIN	9
#define CFG_SET_FPS			10
#define CFG_SET_PICT_FPS		11
#define CFG_SET_BRIGHTNESS		12
#define CFG_SET_CONTRAST		13
#define CFG_SET_ZOOM			14
#define CFG_SET_EXPOSURE_MODE		15
#define CFG_SET_WB			16
#define CFG_SET_ANTIBANDING		17
#define CFG_SET_EXP_GAIN		18
#define CFG_SET_PICT_EXP_GAIN		19
#define CFG_SET_LENS_SHADING		20
#define CFG_GET_PICT_FPS		21
#define CFG_GET_PREV_L_PF		22
#define CFG_GET_PREV_P_PL		23
#define CFG_GET_PICT_L_PF		24
#define CFG_GET_PICT_P_PL		25
#define CFG_GET_AF_MAX_STEPS		26
#define CFG_GET_PICT_MAX_EXP_LC		27
#define CFG_I2C_IOCTL_R_OTP	28
#define CFG_SET_OV_LSC	29
#define CFG_SET_SHARPNESS 30
#define CFG_SET_SATURATION 31
#define CFG_SET_OV_LSC_RAW_CAPTURE 32
#define CFG_SET_ISO			33
#define CFG_SET_COORDINATE		34
#define CFG_RUN_AUTO_FOCUS		35
#define CFG_CANCEL_AUTO_FOCUS		36
#define CFG_GET_EXP_FOR_LED		37
#define CFG_UPDATE_AEC_FOR_LED		38
#define CFG_SET_FRONT_CAMERA_MODE	39
#define CFG_SET_QCT_LSC_RAW_CAPTURE 40
#define CFG_SET_QTR_SIZE_MODE		41
#define CFG_GET_AF_STATE		42
#define CFG_SET_DMODE			43
#define CFG_SET_CALIBRATION	44
#define CFG_SET_AF_MODE		45
#define CFG_GET_SP3D_L_FRAME	46
#define CFG_GET_SP3D_R_FRAME	47
#define CFG_SET_FLASHLIGHT		48
#define CFG_SEND_WB_INFO        49
#define CFG_SET_FLASHLIGHT_EXP_DIV 50
#define CFG_GET_ISO             51
#define CFG_MAX                 52



#define MOVE_NEAR	0
#define MOVE_FAR	1

#define SENSOR_PREVIEW_MODE		0
#define SENSOR_SNAPSHOT_MODE		1
#define SENSOR_RAW_SNAPSHOT_MODE	2
#define SENSOR_VIDEO_MODE	3
#define SENSOR_VIDEO_120FPS_MODE	4
#define SENSOR_GET_EXP 5


#define SENSOR_QTR_SIZE			0
#define SENSOR_FULL_SIZE		1
#define SENSOR_QVGA_SIZE		2
#define SENSOR_VIDEO_SIZE		3
#define SENSOR_INVALID_SIZE		4

#define CAMERA_EFFECT_OFF		0
#define CAMERA_EFFECT_MONO		1
#define CAMERA_EFFECT_NEGATIVE		2
#define CAMERA_EFFECT_SOLARIZE		3
#define CAMERA_EFFECT_SEPIA		4
#define CAMERA_EFFECT_POSTERIZE		5
#define CAMERA_EFFECT_WHITEBOARD	6
#define CAMERA_EFFECT_BLACKBOARD	7
#define CAMERA_EFFECT_AQUA		8
#define CAMERA_EFFECT_MAX		9

#define CAMERA_3D_MODE 0
#define CAMERA_2D_MODE 1


struct sensor_pict_fps {
	uint16_t prevfps;
	uint16_t pictfps;
};

struct exp_gain_cfg {
	uint16_t gain;
	uint32_t line;
	uint16_t mul;
};

struct focus_cfg {
	int32_t steps;
	int dir;
	int coarse_delay;
	int fine_delay;
	int step_dir;
	int init_code_offset_max;
};

struct fps_cfg {
	uint16_t f_mult;
	uint16_t fps_div;
	uint32_t pict_fps_div;
};

struct wb_info_cfg {
	uint16_t red_gain;
	uint16_t green_gain;
	uint16_t blue_gain;
};


/*Becker for AWB calibration*/
struct fuse_id{
	uint32_t fuse_id_word1;
	uint32_t fuse_id_word2;
	uint32_t fuse_id_word3;
	uint32_t fuse_id_word4;
};

/*Vincent for LSC calibration*/
struct reg_addr_val_pair_struct {
	uint16_t reg_addr;
	uint8_t reg_val;
};

struct lsc_cfg{
	struct reg_addr_val_pair_struct lsc_table[144]; /*OV LSC table*/
};


// For 2nd CAM (mt9v113)
enum antibanding_mode{
	CAMERA_ANTI_BANDING_50HZ,
	CAMERA_ANTI_BANDING_60HZ,
	CAMERA_ANTI_BANDING_AUTO,
};

enum brightness_t{
	CAMERA_BRIGHTNESS_N3,
	CAMERA_BRIGHTNESS_N2,
	CAMERA_BRIGHTNESS_N1,
	CAMERA_BRIGHTNESS_D,
	CAMERA_BRIGHTNESS_P1,
	CAMERA_BRIGHTNESS_P2,
	CAMERA_BRIGHTNESS_P3,
        CAMERA_BRIGHTNESS_P4,
        CAMERA_BRIGHTNESS_N4,
};

enum frontcam_t{
	CAMERA_MIRROR,
	CAMERA_REVERSE,
	CAMERA_PORTRAIT_REVERSE, /* 0916 for 3rd party */
};

enum wb_mode{
	CAMERA_AWB_AUTO,/*auto*/
	CAMERA_AWB_CLOUDY,/*Cloudy*/
	CAMERA_AWB_INDOOR_HOME,/*Fluorescent*/
	CAMERA_AWB_INDOOR_OFFICE,/*Incandescent*/
	CAMERA_AWB_SUNNY,/*daylight*/
};

enum iso_mode{
  CAMERA_ISO_AUTO = 0,
  CAMERA_ISO_DEBLUR,
  CAMERA_ISO_100,
  CAMERA_ISO_200,
  CAMERA_ISO_400,
  CAMERA_ISO_800,
  CAMERA_ISO_1250,
  CAMERA_ISO_1600,
  CAMERA_ISO_MAX
};

enum sharpness_mode{
	CAMERA_SHARPNESS_X0,
	CAMERA_SHARPNESS_X1,
	CAMERA_SHARPNESS_X2,
	CAMERA_SHARPNESS_X3,
	CAMERA_SHARPNESS_X4,
};

enum saturation_mode{
	CAMERA_SATURATION_X0,
	CAMERA_SATURATION_X05,
	CAMERA_SATURATION_X1,
	CAMERA_SATURATION_X15,
	CAMERA_SATURATION_X2,
};

enum contrast_mode{
	CAMERA_CONTRAST_P2,
	CAMERA_CONTRAST_P1,
	CAMERA_CONTRAST_D,
	CAMERA_CONTRAST_N1,
	CAMERA_CONTRAST_N2,
};

enum qtr_size_mode{
	NORMAL_QTR_SIZE_MODE,
	LARGER_QTR_SIZE_MODE,
};

enum sensor_af_mode{
	SENSOR_AF_MODE_AUTO,
	SENSOR_AF_MODE_NORMAL,
	SENSOR_AF_MODE_MACRO,
};

struct Sp3d_OTP{
	unsigned long long  coefA1;
	unsigned long long  coefB1;
	unsigned long long  coefC1;
	unsigned long long  coefA2;
	unsigned long long  coefB2;
	unsigned long long  coefC2;
	unsigned long long  coefA3;
	unsigned long long  coefB3;
	unsigned long long  coefC3;
};

struct otp_cfg{
	struct Sp3d_OTP master_otp;
	struct Sp3d_OTP slave_otp;
	uint8_t sp3d_id[11];
	uint16_t sp3d_otp_version;
};

struct flash_cfg{
	uint8_t flash_enable;
	uint16_t exp_pre;
	uint16_t exp_off;
	uint16_t luma_pre;
	uint16_t luma_off;
};

struct sensor_cfg_data {
	int cfgtype;
	int mode;
	int rs;
	uint8_t max_steps;

	union {
		int8_t af_area;
		int8_t effect;
		uint8_t lens_shading;
		uint16_t prevl_pf;
		uint16_t prevp_pl;
		uint16_t pictl_pf;
		uint16_t pictp_pl;
		uint32_t pict_max_exp_lc;
		uint16_t p_fps;
		uint16_t flash_exp_div;
		uint16_t real_iso_value;
		struct sensor_pict_fps gfps;
		struct exp_gain_cfg exp_gain;
		struct focus_cfg focus;
		struct fps_cfg fps;
		struct wb_info_cfg wb_info;
		struct fuse_id fuse;
		struct lsc_cfg lsctable;/*Vincent for LSC calibration*/
		struct otp_cfg sp3d_otp_cfg;
		struct flash_cfg flash_data;
//For 2nd CAM
		enum antibanding_mode antibanding_value;
		enum brightness_t brightness_value;
		enum frontcam_t frontcam_value;
		enum wb_mode wb_value;
		enum iso_mode iso_value;
		enum sharpness_mode sharpness_value;
		enum saturation_mode saturation_value;
		enum contrast_mode  contrast_value;
		enum qtr_size_mode qtr_size_mode_value;
		enum sensor_af_mode af_mode_value;
	} cfg;
};




#define GET_NAME			0
#define GET_PREVIEW_LINE_PER_FRAME	1
#define GET_PREVIEW_PIXELS_PER_LINE	2
#define GET_SNAPSHOT_LINE_PER_FRAME	3
#define GET_SNAPSHOT_PIXELS_PER_LINE	4
#define GET_SNAPSHOT_FPS		5
#define GET_SNAPSHOT_MAX_EP_LINE_CNT	6

#define SP3D_REGADDR_WR 0x70
#define SP3D_REGVAL_WR	0x72
#define SP3D_REGVAL_RD	0x73


#endif /* __LINUX_MSM_CAMERA_H */
#endif /* __LINUX_MSM_CAMERA_H */

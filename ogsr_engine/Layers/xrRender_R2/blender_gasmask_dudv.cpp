#include "stdafx.h"

#include "blender_gasmask_dudv.h"

CBlender_gasmask_dudv::CBlender_gasmask_dudv() { description.CLS = 0; }
CBlender_gasmask_dudv::~CBlender_gasmask_dudv() { }

void CBlender_gasmask_dudv::Compile(CBlender_Compile& C)
{
	IBlender::Compile(C);

	C.r_Pass("null", "gasmask_dudv", FALSE, FALSE, FALSE);
	C.r_Sampler_clf("s_image", r2_RT_generic0);
	C.r_Sampler_clf("s_bloom", r2_RT_bloom1);
	
	C.r_Sampler_clf("s_mask_nm_1", "shaders\\mask_nm_1");
	C.r_Sampler_clf("s_mask_nm_2", "shaders\\mask_nm_2");
	C.r_Sampler_clf("s_mask_nm_3", "shaders\\mask_nm_3");
	C.r_Sampler_clf("s_mask_nm_4", "shaders\\mask_nm_4");
	C.r_Sampler_clf("s_mask_nm_5", "shaders\\mask_nm_5");
	C.r_Sampler_clf("s_mask_nm_6", "shaders\\mask_nm_6");
	C.r_Sampler_clf("s_mask_nm_7", "shaders\\mask_nm_7");
	C.r_Sampler_clf("s_mask_nm_8", "shaders\\mask_nm_8");
	C.r_Sampler_clf("s_mask_nm_9", "shaders\\mask_nm_9");
	C.r_Sampler_clf("s_mask_nm_10", "shaders\\mask_nm_10");
	C.r_End();
} 
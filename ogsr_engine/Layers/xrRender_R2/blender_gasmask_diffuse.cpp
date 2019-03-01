#include "stdafx.h"

#include "blender_gasmask_diffuse.h"

CBlender_gasmask_diffuse::CBlender_gasmask_diffuse() { description.CLS = 0; }
CBlender_gasmask_diffuse::~CBlender_gasmask_diffuse() { }

void CBlender_gasmask_diffuse::Compile(CBlender_Compile& C)
{
	IBlender::Compile(C);

	C.r_Pass("null", "gasmask_diffuse", FALSE, FALSE, FALSE);
	C.r_Sampler_clf("s_image", r2_RT_generic0);
	C.r_Sampler_clf("s_bloom", r2_RT_bloom1);

	C.r_Sampler_clf("s_mask_1", "shaders\\mask_1");
	C.r_Sampler_clf("s_mask_2", "shaders\\mask_2");
	C.r_Sampler_clf("s_mask_3", "shaders\\mask_3");
	C.r_Sampler_clf("s_mask_4", "shaders\\mask_4");
	C.r_Sampler_clf("s_mask_5", "shaders\\mask_5");
	C.r_Sampler_clf("s_mask_6", "shaders\\mask_6");
	C.r_Sampler_clf("s_mask_7", "shaders\\mask_7");
	C.r_Sampler_clf("s_mask_8", "shaders\\mask_8");
	C.r_Sampler_clf("s_mask_9", "shaders\\mask_9");
	C.r_Sampler_clf("s_mask_10", "shaders\\mask_10");
	C.r_End();
} 
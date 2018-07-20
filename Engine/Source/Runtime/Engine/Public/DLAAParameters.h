// Copyright (c) 2017, NVIDIA CORPORATION. All rights reserved.

#pragma once

#include "RendererInterface.h"

#define DLAA

struct FDLAAParameters
{
	bool bDisablePostEffectsForDLAA = true;
	TRefCountPtr<IPooledRenderTarget> DLAAVelocityRT;
	TRefCountPtr<IPooledRenderTarget> DLAALDRFrameRT;
	TRefCountPtr<IPooledRenderTarget> DLAAHDRFrameRT;
	TRefCountPtr<IPooledRenderTarget> DLAATempRT;

	void Release()
	{
		DLAAVelocityRT = nullptr;
		DLAALDRFrameRT = nullptr;
		DLAAHDRFrameRT = nullptr;
		DLAATempRT = nullptr;
	}	
};
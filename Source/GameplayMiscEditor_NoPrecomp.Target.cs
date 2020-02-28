// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class GameplayMiscEditor_NoPrecompTarget : GameplayMiscEditorTarget 
{
	public GameplayMiscEditor_NoPrecompTarget( TargetInfo Target) : base(Target)
	{
		bUseUnityBuild = false;
		bUsePCHFiles = false;
	}
}

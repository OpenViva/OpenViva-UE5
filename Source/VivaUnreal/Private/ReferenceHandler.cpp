// Copyright (C) 2023 OpenViva Team. Licensed under AGPL-3.0.


#include "ReferenceHandler.h"

UReferenceHandler* UReferenceHandler::Instance = nullptr;

UReferenceHandler::UReferenceHandler()
{

}

UReferenceHandler* UReferenceHandler::GetInstance()
{
    if (Instance == nullptr)
    {
        // Create a new instance if it doesn't exist
        Instance = NewObject<UReferenceHandler>();
    }
    return Instance;
}
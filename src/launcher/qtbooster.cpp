/*
 * qtbooster.cpp
 *
 * This file is part of launcher
 *
 * Copyright (C) 2010 Nokia Corporation. All rights reserved.
 *
 * This software, including documentation, is protected by copyright
 * controlled by Nokia Corporation. All rights are reserved.
 * Copying, including reproducing, storing, adapting or translating,
 * any or all of this material requires the prior written consent of
 * Nokia Corporation. This material also contains confidential
 * information which may not be disclosed to others without the prior
 * written consent of Nokia.
 */

#include "qtbooster.h"

const string QtBooster::soketId = "/tmp/qtlnchr";

QtBooster::QtBooster()
{
}

QtBooster::~QtBooster()
{
}

const string QtBooster::socketId() const
{
    return soketId;
}

const string QtBooster::socketName()
{
    return soketId;
}

char QtBooster::type()
{
    return 'q';
}

bool QtBooster::preload()
{
    return true;
}

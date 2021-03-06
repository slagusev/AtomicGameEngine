
#pragma once

#include <Atomic/Core/Object.h>

using namespace Atomic;

namespace ToolCore
{

class BuildBase;
class Project;

enum PlatformID
{
    PLATFORMID_UNDEFINED,
    PLATFORMID_WINDOWS,
    PLATFORMID_MAC,
    PLATFORMID_ANDROID,
    PLATFORMID_IOS,
    PLATFORMID_WEB
};

class Platform : public Object
{
    OBJECT(Platform);

public:

    Platform(Context* context);
    virtual ~Platform();

    virtual String GetName() = 0;
    virtual PlatformID GetPlatformID() = 0;

    virtual BuildBase* NewBuild(Project* project) = 0;

private:

    bool validLicense_;

};

}

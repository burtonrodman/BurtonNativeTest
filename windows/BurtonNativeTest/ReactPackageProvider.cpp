#include "pch.h"
#include "ReactPackageProvider.h"
#include "NativeModules.h"

#include "FancyMath.h"

using namespace winrt::Microsoft::ReactNative;

namespace winrt::BurtonNativeTest::implementation
{

void ReactPackageProvider::CreatePackage(IReactPackageBuilder const &packageBuilder) noexcept
{
    AddAttributedModules(packageBuilder);
}

} // namespace winrt::BurtonNativeTest::implementation

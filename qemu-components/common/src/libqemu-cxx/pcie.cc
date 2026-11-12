#include <libqemu/libqemu.h>
#include <internals.h>
#include <libqemu-cxx/libqemu-cxx.h>

namespace qemu {

bool PCIeDevice::msi_notify(unsigned vector)
{
    auto* pdev = reinterpret_cast<QemuPCIDevice*>(m_obj);
    return m_int->exports().pcie_msi_notify(pdev, vector);
}

bool PCIeDevice::msix_notify(unsigned vector)
{
    auto* pdev = reinterpret_cast<QemuPCIDevice*>(m_obj);
    return m_int->exports().pcie_msix_notify(pdev, vector);
}

}
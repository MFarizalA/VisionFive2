/*++

Module Name:

    public.h

Abstract:

    This module contains the common declarations shared by driver
    and user applications.

Environment:

    user and kernel

--*/

//
// Define an Interface Guid so that app can find the device and talk to it.
//

DEFINE_GUID (GUID_DEVINTERFACE_vpudrv,
    0x7634f416,0x160f,0x43c1,0xb2,0xef,0x84,0xc2,0xb9,0x7e,0x07,0xcb);
// {7634f416-160f-43c1-b2ef-84c2b97e07cb}

#define FILE_DEVICE_VPU 0x8000

#define VDI_IOCTL_GET_RESERVED_VIDEO_MEMORY_INFO \
	CTL_CODE(FILE_DEVICE_VPU, 0x900, METHOD_OUT_DIRECT, FILE_ANY_ACCESS)

#define VDI_IOCTL_MAP_PHYSICAL_MEMORY \
	CTL_CODE(FILE_DEVICE_VPU, 0x903, METHOD_OUT_DIRECT, FILE_ANY_ACCESS)

#define VDI_IOCTL_UNMAP_PHYSICALMEMORY \
	CTL_CODE(FILE_DEVICE_VPU, 0x904, METHOD_OUT_DIRECT, FILE_ANY_ACCESS)

#define VDI_IOCTL_WAIT_INTERRUPT \
	CTL_CODE(FILE_DEVICE_VPU, 0x905, METHOD_IN_DIRECT, FILE_ANY_ACCESS)

#define VDI_IOCTL_SET_CLOCK_GATE \
	CTL_CODE(FILE_DEVICE_VPU, 0x906, METHOD_IN_DIRECT, FILE_ANY_ACCESS)

#define VDI_IOCTL_RESET \
	CTL_CODE(FILE_DEVICE_VPU, 0x907, METHOD_IN_DIRECT, FILE_ANY_ACCESS)

#define VDI_IOCTL_GET_INSTANCE_POOL \
	CTL_CODE(FILE_DEVICE_VPU, 0x908, METHOD_OUT_DIRECT, FILE_ANY_ACCESS)

// for C&N FPGA env
#define REG_WRITE_REGISTER 0
#define REG_READ_REGISTER 1
typedef struct HPI_REGISTER_INFO
{
	ULONG Command;
	ULONG Address;
	ULONG Data;
}HPI_REGISTER_INFO, *PHPI_REGISTER_INFO;
//
#define VDI_IOCTL_READ_HPI_REGISTER \
	CTL_CODE(FILE_DEVICE_VPU, 0x90A, METHOD_OUT_DIRECT, FILE_ANY_ACCESS)

#define VDI_IOCTL_WRITE_HPI_REGISTER \
	CTL_CODE(FILE_DEVICE_VPU, 0x90B, METHOD_OUT_DIRECT, FILE_ANY_ACCESS)

typedef LARGE_INTEGER PHYSICAL_ADDRESS, *PPHYSICAL_ADDRESS;

typedef struct vpudrv_buffer_t {
	ULONG size;
	PHYSICAL_ADDRESS phys_addr;
	ULONGLONG base;
	ULONGLONG virt_addr;	
	ULONGLONG mdl;	
} vpudrv_buffer_t;

#define VPUDRV_INIT_VIDEO_MEMORY_SIZE_IN_BYTE (1*1024*1024) //(512*1024*1024)
 

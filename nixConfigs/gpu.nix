{ config, lib, pkgs, ... }:

{

  hardware.opengl = {
    enable = true;
    driSupport = true;
    driSupport32Bit = true;

  };

  services.xserver.videoDrivers = [ "nvidia" ];

  hardware.nvidia = {
    # Modesetting
    modesetting.enable = true;

    # Powermanagement sucks on linux
    powerManagement.enable = true;

    # Comment if issues #1
    powerManagement.finegrained = false;

    # Use open drivers: don't work on MX150;
    open = false;

    nvidiaSettings = true; # accessible via nvidia-settings
    package = config.boot.kernelPackages.nvidiaPackages.legacy_390;
  };

  hardware.nvidia.prime = {
    sync.enable = true;

    intelBusId = "PCI:0:2:0";
    nvidiaBusId = "PCI:1:0:0";
  };
}

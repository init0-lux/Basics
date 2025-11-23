{
	fileSystems."/data" = {
		device = "dev/disk/by-uuid/50826c5e-afd6-4a87-b2d1-364bf3f52cb9";
		fsType = "ext4";
		options = [ "nofail" ];
	};

	fileSystems."/OS" = {
		device = "dev/disk/by-uuid/1AD012C7D012A951";
		fsType = "ntfs";
		options = [ "nofail" ];
	};

	fileSystems."/Backups" = {
		device = "dev/disk/by-uuid/93adb176-29ed-4ec3-8a89-79cbaacff300";
		fsType = "ext4";
		options = [ "nofail" ];
	};

	fileSystems."/home/init0/Documents" = {
		depends = [ "/data" ];
		device = "/data/Documents";
		fsType = "none";
		options = [ "bind" "rw" "nofail" ];
	};

	fileSystems."/home/init0/Code" = {
		depends = [ "/data" ];
		device = "/data/Code";
		fsType = "none";
		options = [ "bind" "rw" "nofail" ];
	};

	fileSystems."/home/init0/Tools" = {
		depends = [ "/data" ];
		device = "/data/Tools";
		fsType = "none";
		options = [ "bind" "rw" "nofail" ];
	};
}

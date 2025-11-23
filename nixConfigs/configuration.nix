# Edit this configuration file to define what should be installed on
# your system.  Help is available in the configuration.nix(5) man page
# and in the NixOS manual (accessible by running ‘nixos-help’).
{ config, pkgs, ... }:

{
	imports = [ 
                # Include the results of the hardware scan.
		./hardware-configuration.nix
		./filesystems.nix
		./nvim.nix
        ./fonts.nix
        ./tmux.nix
        ./gpu.nix
        ./big.nix # Big Programs; comment during first install;
		];

	# Bootloader.
	boot.loader.systemd-boot.enable = true;
	boot.loader.efi.canTouchEfiVariables = true;

	networking.hostName = "nixos"; # Define your hostname.
	# networking.wireless.enable = true;  # Enables wireless support via wpa_supplicant.

	# Configure network proxy if necessary
	# networking.proxy.default = "http://user:password@proxy:port/";
	# networking.proxy.noProxy = "127.0.0.1,localhost,internal.domain";

	# Enable networking
	networking.networkmanager.enable = true;
	
	# Set your time zone.
	time.timeZone = "Asia/Kolkata";

	# Select internationalisation properties.
	i18n.defaultLocale = "en_US.UTF-8";

	i18n.extraLocaleSettings = {
		LC_ADDRESS = "en_US.UTF-8";
		LC_IDENTIFICATION = "en_US.UTF-8";
        LC_MEASUREMENT = "en_US.UTF-8";
        LC_MESSAGES = "en_US.UTF-8";
		LC_MONETARY = "en_US.UTF-8";
		LC_NAME = "en_US.UTF-8";
		LC_NUMERIC = "en_US.UTF-8";
		LC_PAPER = "en_US.UTF-8";
		LC_TELEPHONE = "en_US.UTF-8";
		LC_TIME = "en_US.UTF-8";
	};

	# Enable the X11 windowing system.
    services.xserver.enable = true;

	# Enable the KDE Plasma Desktop Environment.
	services.displayManager.sddm.enable = true;
	services.xserver.desktopManager.plasma5.enable = true;

	# Configure keymap in X11
	services.xserver = {
		xkb.layout = "us";
		xkb.variant = "";
	};

	# Enable CUPS to print documents.
	services.printing.enable = true;

	# Enable sound with pipewire.
	sound.enable = true;
	hardware.pulseaudio.enable = false;
	security.rtkit.enable = true;

	services.pipewire = {
		enable = true;
		alsa.enable = true;
		alsa.support32Bit = true;
		pulse.enable = true;
		# If you want to use JACK applications, uncomment this
                # jack.enable = true;

		# use the example session manager (no others are packaged yet so this is enabled by default,
		# no need to redefine it in your config for now)
		#media-session.enable = true;
	};

	# Enable touchpad support (enabled default in most desktopManager).
	# services.xserver.libinput.enable = true;

	# Define a user account. Don't forget to set a password with ‘passwd’.
	security.sudo.wheelNeedsPassword = false;
	users.users.init0 = {
		isNormalUser = true;
		description = "init0";
		extraGroups = [ "networkmanager" "wheel" "kvm" "adbusers" "vboxusers"];
		packages = with pkgs; [
			kate
			#  thunderbird
			];
        };
        users.defaultUserShell = pkgs.zsh;

	# Install and configure firefox.
    # programs.firefox.enable = true;
    programs.firefox = {
      enable = true;
      preferences = {
        "pdfjs.cursorToolOnLoad" = 1;
        "pdfjs.defaultZoomValue" = "page-fit";
        "pdfjs.scrollModeOnLoad" = 1;
        "widget.use-xdg-desktop-portal.file-picker" = 1;
      };
    };

	# Install KDE Connect
	programs.kdeconnect.enable = true;
	
	# Allow unfree packages
	nixpkgs.config.allowUnfree = true;
    nixpkgs.config.nvidia.acceptLicense = true;

    # Allow insecure packages
    nixpkgs.config.permittedInsecurePackages = [
      "qbittorrent-4.6.4"
      "gradle-6.9.4"
    ];

    hardware.nvidia.package = config.boot.kernelPackages.nvidiaPackages.stable;

	# List packages installed in system profile. To search, run:
	# $ nix search wget
	environment.systemPackages = with pkgs; [
		vim # Do not forget to add an editor to edit configuration.nix! The Nano editor is also installed by default.
		wget
		vlc
		alacritty
		typescript
		libgcc
		python3
		go
		cargo
		rustc
		netcat-gnu
		gimp-with-plugins
		tor
		p7zip
		tor-browser
		tmux
		audacity
		libreoffice-qt
		file
		gparted
		git
		ngrok
		pgrok
		brightnessctl
		python311Packages.ipython
		zsh-powerlevel10k
		meslo-lg
		meslo-lgs-nf
		nodePackages.parcel
		bun

		#ADD
		ffmpeg
		pigz
		openssl
		qbittorrent
		darktable
		postman
		gdb
		anki
		jdk
		jre8
		dart
		ripgrep
		macchanger
		ripgrep
		cling
		
		nodejs_22
		opencv
		inetutils
		clang
		gcc
		gcc
		du-dust
		service-wrapper
		lshw
		pciutils
		busybox
		yt-dlp
		pv
		libsForQt5.kdenlive
		plasma-systemmonitor
		usbmuxd
		xclip
		gnome.cheese
		feh
		ifuse
		#telegram-desktop
		unzip
		libsForQt5.filelight
		imagemagick
		beep
		ghostscript
		nginx
		droidcam

		# pentest
		wifite2
		kismet
		nikto
		hashcat
		john
		sqlmap
		nmap
		wireshark
		armitage
		metasploit
		httrack
		aircrack-ng
	];

	# Some programs need SUID wrappers, can be configured further or are
	# started in user sessions.
	# programs.mtr.enable = true;
	# programs.gnupg.agent = {
	#   enable = true;
	#   enableSSHSupport = true;
	# };

	# List services that you want to enable:

	# Enable the OpenSSH daemon.
	services.openssh.enable = true;
        boot.initrd.network.ssh.port = 2219;
        boot.initrd.network.ssh.shell = "\"/bin/zsh\"";

        # Open ports in the firewall.
	# networking.firewall.allowedTCPPorts = [ ... ];
	# networking.firewall.allowedUDPPorts = [ ... ];
	# Or disable the firewall altogether.
	# networking.firewall.enable = false;

	# This value determines the NixOS release from which the default
	# settings for stateful data, like file locations and database versions
	# on your system were taken. It‘s perfectly fine and recommended to leave
	# this value at the release version of the first install of this system.
	# Before changing this value read the documentation for this option
	# (e.g. man configuration.nix or on https://nixos.org/nixos/options.html).
	system.stateVersion = "23.11"; # Did you read the comment?
	nix.settings.experimental-features = [ "nix-command" "flakes" ];	

	# ntfs support
	boot.supportedFilesystems = [ "ntfs" ];
	hardware.bluetooth.enable = true;

        services.postgresql.enable = true;
        services.postgresql.package = pkgs.postgresql_15;

        # Adb
        programs.adb.enable = true;

        # VirtualBox Support
        virtualisation.virtualbox.host.enable = true;
        users.extraGroups.vboxusers.members = ["vboxusers"];
        virtualisation.virtualbox.guest.enable = true;
        virtualisation.virtualbox.guest.draganddrop = true;
        virtualisation.virtualbox.host.enableExtensionPack = true;

        boot.kernelModules = [ "vboxdrv" "vboxnetadp" "vboxnetflt" ];

        # ZSH
        programs.zsh = {
		enable = true;
		enableCompletion = true;
		syntaxHighlighting.enable = true;
		histSize = 1000;
		histFile = ".zsh/history";
    };

 boot = {
    extraModulePackages = with config.boot.kernelPackages; [ v4l2loopback ];
    extraModprobeConfig = ''
      options v4l2loopback devices=1 video_nr=1 card_label="OBS Cam" exclusive_caps=1
    '';
  };

  security.polkit.enable = true;
}

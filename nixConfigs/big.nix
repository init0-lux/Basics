{ config, pkgs, ... }:

{
  environment.systemPackages = with pkgs; [
    chromium
    telegram-desktop
    obs-studio
    blender
    figma-linux
    vscode
  ];
}

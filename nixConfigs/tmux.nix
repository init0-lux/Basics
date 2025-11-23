{ config, pkgs, ... }:

{
  programs.tmux = {
    enable = true;
    clock24 = true;
    newSession = true;
    escapeTime = 0;

    plugins = with pkgs; [ tmuxPlugins.better-mouse-mode ];

    extraConfig = ''
      unbind C-b
      set -g prefix C-s
      bind C-s send-prefix

      set -g status-right '#[fg=black,bg=color15]' #{cpu_percentage} %H:%M '

      bind -n M-\\ split-window -h -c "#{pane_current_path}"
      bind -n M-\- split-window -v -c "#{pane_current_path}"

      bind -n M-f new-window -c "#{pane_current_path}"

      bind -n M-k select-pane -L
      bind -n M-h select-pane -R
      bind -n M-i select-pane -U
      bind -n M-n select-pane -D

      bind-key -n M-1 select-window -t 0
      bind-key -n M-2 select-window -t 1
      bind-key -n M-3 select-window -t 2
      bind-key -n M-4 select-window -t 3
      bind-key -n M-5 select-window -t 4
      bind-key -n M-6 select-window -t 5
      bind-key -n M-7 select-window -t 6
      bind-key -n M-8 select-window -t 7
      bind-key -n M-9 select-window -t 8

      bind -n M-Right next-window
      bind -n M-l next-window
      bind -n M-Left previous-window
      bind -n M-r previous-window

      set-option -g allow-rename off

      set -g default-shell /run/current-system/sw/bin/zsh

      bind f new-window -c "#{pane_current_path}"
      '';
  };
}

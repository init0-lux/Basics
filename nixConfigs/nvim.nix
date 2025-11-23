{ config, pkgs, ... }:

{
	programs.neovim = {
		enable = true;
		defaultEditor = true;
		viAlias = true;
		vimAlias = true;
	
		configure = {
                  customRC = ''
                  set number
                  set list
                  set virtualedit+=onemore
                  set ignorecase
                  syntax on
                  set wrap
                  filetype plugin on

                  nmap <c-j> +3
                  vmap <c-j> +3
                  nmap <c-k> -3
                  vmap <c-k> -3

                  inoremap " ""<left>
                  inoremap ' '''<left>
                  inoremap ( ()<left>
                  inoremap [ []<left>
                  inoremap { {}<left>
                  inoremap ` ``<left>
                  "inoremap < <><left>

                  nnoremap ff <cmd>Telescope find_files<cr>
                  nnoremap fg <cmd>Telescope live_grep<cr>
                  nnoremap fb <cmd>Telescope buffers<cr>
                  nnoremap fh <cmd>Telescope help_tags<cr>

                  command WQ wq
                  command Wq wq
                  command W w
                  command Q q

                  colorscheme molokai_dark
                  set wildmenu
                  set completeopt-=preview

                  set nobackup
                  set nowritebackup
                  set shiftwidth=4
                  set tabstop=4
                  '';
		
		# Packages
		packages.myVimPackage = with pkgs.vimPlugins; {
            start = [
                YouCompleteMe
                nerdtree
                vim-go
                rust-vim
                vim-nix
                emmet-vim
                vim-lastplace
                vim-colorschemes
                syntastic
                nerdcommenter
                vim-surround
                typescript-nvim
                lazy-nvim
                telescope-nvim
                telescope-coc-nvim
                clang_complete
                nvim-lspconfig
                nvim-treesitter
                vim-android
                vim-flutter
                vim-lsp
                coc-eslint
                coc-tsserver
                coc-nvim
                copilot-vim
            ];
      };

      vimrcConfig.plug.plugins = with pkgs.vimPlugins; [
          vim-es6
          javascript-libraries-syntax
          vim-jsx
        ];
      };
};
}

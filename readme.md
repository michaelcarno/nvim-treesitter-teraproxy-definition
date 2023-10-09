# nvim-treesitter tera-proxy definition 
This package for nvim highlight tera-proxy def file's according your color scheme.
WIP

# using
Put this in your polish function in init.lua: 
```
local parser_config = require "nvim-treesitter.parsers".get_parser_configs()

parser_config.teraonline_definitions = {
  install_info = {
    url = "https://github.com/michaelcarno/nvim-treesitter-teraproxy-definition", -- local path or git repo
    files = { "src/parser.c" },                             -- note that some parsers also require src/scanner.c or src/scanner.cc
    -- optional entries:
    branch = "main",                                        -- default branch in case of git repo if different from master
    generate_requires_npm = true,                          -- if stand-alone parser without npm dependencies
    requires_generate_from_grammar = true,                 -- if folder contains pre-generated src/parser.c
  },
  filetype = "def",                                         -- if filetype does not match the parser name
}
```
Sample of highlight:

![Sample](./tera-proxy-difinition-sample.jpg)


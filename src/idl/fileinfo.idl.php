<?php
/**
 * Automatically generated by running "php schema.php file".
 *
 * You may modify the file, but re-running schema.php against this file will
 * standardize the format without losing your schema changes. It does lose
 * any changes that are not part of schema. Use "note" field to comment on
 * schema itself, and "note" fields are not used in any code generation but
 * only staying within this file.
 */
///////////////////////////////////////////////////////////////////////////////
// Preamble: C++ code inserted at beginning of ext_{name}.h

DefinePreamble(<<<CPP

CPP
);

///////////////////////////////////////////////////////////////////////////////
// Constants
//
// array (
//   'name' => name of the constant
//   'type' => type of the constant
//   'note' => additional note about this constant's schema
// )

DefineConstant(array('name' => "FILEINFO_NONE", 'type' => Int64,));
DefineConstant(array('name' => "FILEINFO_SYMLINK", 'type' => Int64,));
DefineConstant(array('name' => "FILEINFO_MIME", 'type' => Int64,));
DefineConstant(array('name' => "FILEINFO_MIME_TYPE", 'type' => Int64,));
DefineConstant(array('name' => "FILEINFO_MIME_ENCODING", 'type' => Int64,));
DefineConstant(array('name' => "FILEINFO_DEVICES", 'type' => Int64,));
DefineConstant(array('name' => "FILEINFO_CONTINUE", 'type' => Int64,));
DefineConstant(array('name' => "FILEINFO_PRESERVE_ATIME", 'type' => Int64,));
DefineConstant(array('name' => "FILEINFO_RAW", 'type' => Int64,));


///////////////////////////////////////////////////////////////////////////////
// Functions
//
// array (
//   'name'   => name of the function
//   'desc'   => description of the function's purpose
//   'flags'  => attributes of the function, see base.php for possible values
//   'opt'    => optimization callback function's name for compiler
//   'note'   => additional note about this function's schema
//   'return' =>
//      array (
//        'type'  => return type, use Reference for ref return
//        'desc'  => description of the return value
//      )
//   'args'   => arguments
//      array (
//        'name'  => name of the argument
//        'type'  => type of the argument, use Reference for output parameter
//        'value' => default value of the argument
//        'desc'  => description of the argument
//      )
// )

DefineFunction(
  array(
    'name'   => "finfo_open",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Variant,
    ),
    'args'   => array(
      array(
        'name'   => "options",
        'type'   => Int64,
				'value'  => "k_FILEINFO_NONE",
      ),
      array(
        'name'   => "magic_file",
        'type'   => String,
				'value'  => "null_string",
      ),
    ),
  ));
	
DefineFunction(
  array(
    'name'   => "finfo_close",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Variant,
    ),
    'args'   => array(
      array(
        'name'   => "finfo",
        'type'   => Object,
      ),
    ),
  ));
	
DefineFunction(
  array(
    'name'   => "finfo_buffer",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Variant,
    ),
    'args'   => array(
      array(
        'name'   => "finfo",
        'type'   => Object,
      ),
      array(
        'name'   => "buffer",
        'type'   => String,
				'value'  => "null_string",
      ),
      array(
        'name'   => "options",
        'type'   => Int64,
				'value'  => "k_FILEINFO_NONE",
      ),
      array(
        'name'   => "context",
        'type'   => String,
				'value'  => "null_string",
      ),
    ),
  ));
	
DefineFunction(
  array(
    'name'   => "finfo_file",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Variant,
    ),
    'args'   => array(
      array(
        'name'   => "finfo",
        'type'   => Object,
      ),
      array(
        'name'   => "file_name",
        'type'   => String,
				'value'  => "null_string",
      ),
      array(
        'name'   => "options",
        'type'   => Int64,
				'value'  => "k_FILEINFO_NONE",
      ),
      array(
        'name'   => "context",
        'type'   => String,
				'value'  => "null_string",
      ),
    ),
  ));

DefineFunction(
  array(
    'name'   => "finfo_set_flags",
    'flags'  =>  HasDocComment,
    'return' => array(
      'type'   => Variant,
    ),
    'args'   => array(
      array(
        'name'   => "finfo",
        'type'   => Object,
      ),
      array(
        'name'   => "options",
        'type'   => Int64,
				'value'  => "k_FILEINFO_NONE",
      ),
    ),
  ));

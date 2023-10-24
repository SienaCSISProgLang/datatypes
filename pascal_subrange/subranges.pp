(* 
 * Pascal program demonstrating subrange types
 *
 * Jim Teresco, CSC 433, The College of Saint Rose, Fall 2012
 * Updated for Fall 2014, thanks to Scott Whitney for pointing
 * out the compiler flag to enable range checking
 *
 * To compile:
 * fpc subranges.pp
 *
*)

program Subranges;

var
  Hour: 0..23;
  Minute: 0..59;
  Second: 0..59;
  
begin
  { using an out-of-range value for any of these generates a warning by default }
  { or an error if -Cr is specified to the fpc compiler to enable range checking }
  Hour := 17;
  Minute := 35;
  Second := 23;

  writeln( 'Time is ', Hour, ':', Minute, ':', Second );

  { since this results in a value outside of the subrange, the program will }
  { crash here if range checking is enabled }
  Minute := Minute * 3;

  writeln( 'Time is ', Hour, ':', Minute, ':', Second )
end.

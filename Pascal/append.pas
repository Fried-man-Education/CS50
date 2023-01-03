Var UFile : Text;
Begin
 Assign(UFile,'C:\Users\andrew\Desktop\textfile.TXT');
 Append(UFile);
 Writeln(UFile,'How many sentences, '+ 'are present in this file?');
 Close(UFile);
End.

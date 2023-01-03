           Program Files;
Var FName, Txt : String[10];
    UserFile   : Text; 
Begin
 FName := 'Textfile';
 Assign(UserFile,'C:\'+FName+'.txt');
 Rewrite(UserFile); 
 Writeln(UserFile,'PASCAL PROGRAMMING');
 Writeln(UserFile,'yoyoyo,');
 Writeln(UserFile,'please send me an email at:');
 Writeln(UserFile,'andre@iconologic.com.com');
 Writeln('Write some text to the file:');
 Readln(Txt);
 Writeln(UserFile,'');
 Writeln(UserFile,'The user entered this text:');
 Writeln(UserFile,Txt);
 Close(UserFile);
End.
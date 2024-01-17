DO # prompt for user's name 
{
    $User = Read-Host -Prompt 'Input your name'
} 
WHILE ($user -eq "") # until something is input

$DateInfo = Get-Date -UFormat "It is %R on %A, %B%e, %Y.  UTC offset is %Z hours. Seconds in epoch is %s"

Clear-Host
Write-Host "`nHello, $User. Your user name on $env:computername is $env:USERNAME" 
Write-Host "$DateInfo"
Write-Host "The current directory : $(Get-Location)"
Write-Host "PS script full path is: $PSCommandPath"
Write-Host "PS version info:"
$PSVersionTable
Write-Host "`nEnvironment variables by " -NoNewline
Write-Host "Name" -ForegroundColor DarkBlue -BackgroundColor White 
Get-ChildItem Env: # gets all items in the local environment and outputs to screen
Write-Host "`n`n(you may need to scroll up to see everything)" 
pause